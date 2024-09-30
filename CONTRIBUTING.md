# Contribution Rules📚:

- Create files to display `hello world` with various programming languages
- Look at other files before creating one,to avoid duplicate files
- If you want to create a file, but there is already the same file 
- Just add a number to the end of the file name
- e.g FROM `hello-world.py` to `hello-world2.py` 
- Do NOT remove other content.
- Try to keep pull requests small to minimize merge conflicts

<br>

## FAQs
If you have any questions, please check our [FAQs](Faqs.md) for answers.

## Getting Started ✨:

- Fork this repo (button on top)
- Clone on your local machine

```terminal
git clone https://github.com/newridho/Halo-Dunia24.git
```
- Navigate to project directory.
```terminal
cd Halo-Dunia24
```

- Create a new Branch

```markdown
git checkout -b my-new-branch
```
- Make your changes `folderName/fileName`

- Add your changes
```markdown
git add .
```
- Commit your changes.

```markdown
git commit -m "Relevant message"
```
- Then push 
```markdown
git push origin my-new-branch
```


- Create a new pull request from your forked repository

<br>

## Avoid Conflicts {Syncing your fork}

An easy way to avoid conflicts is to add an 'upstream' for your git repo, as other PR's may be merged while you're working on your branch/fork.   

```terminal
git remote add upstream https://github.com/newridho/Halo-Dunia24
```

You can verify that the new remote has been added by typing
```terminal
git remote -v
```

To pull any new changes from your parent repo simply run
```terminal
git merge upstream/main
```

This will give you any eventual conflicts and allow you to easily solve them in your repo. It's a good idea to use it frequently in between your own commits to make sure that your repo is up to date with its parent.