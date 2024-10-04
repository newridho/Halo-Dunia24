<script setup>
import { ref } from 'vue'

const helloWorld = ref('Hello World!')
</script>

<template>
  <h1>{{ helloWorld }}</h1>
</template>