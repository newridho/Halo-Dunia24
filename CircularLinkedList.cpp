#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Insert a new node at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            head->next = head; // Point to itself
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Point to head
        }
    }

    // Display the list
    void display() {
        if (!head) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        Node* temp = head;
        do {
            std::cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        std::cout << std::endl;
    }

    // Delete a node by value
    void deleteNode(int value) {
        if (!head) return;

        Node *temp = head, *prev = nullptr;

        // If head needs to be deleted
        if (head->data == value) {
            if (head->next == head) { // Only one node
                delete head;
                head = nullptr;
                return;
            } else {
                // Find the last node
                while (temp->next != head) {
                    temp = temp->next;
                }
                temp->next = head->next; // Point last node to second node
                delete head; // Delete head
                head = temp->next; // Update head
                return;
            }
        }

        // Search for the node to be deleted
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->data != value);

        // Node not found
        if (temp == head) {
            std::cout << "Node with value " << value << " not found." << std::endl;
            return;
        }

        prev->next = temp->next; // Bypass the node to be deleted
        delete temp; // Delete the node
    }

    // Destructor to free memory
    ~CircularLinkedList() {
        if (!head) return;

        Node* current = head;
        Node* nextNode;

        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
    }
};

int main() {
    CircularLinkedList cll;

    cll.insert(1);
    cll.insert(2);
    cll.insert(3);
    cll.insert(4);
    cll.insert(5);

    std::cout << "Circular Linked List: ";
    cll.display();

    cll.deleteNode(3);
    std::cout << "After deleting 3: ";
    cll.display();

    cll.deleteNode(1);
    std::cout << "After deleting 1: ";
    cll.display();

    return 0;
}
