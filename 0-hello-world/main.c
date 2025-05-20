#include <stdio.h>

int main(void) {
  // Integers
  int age = 30; // - %i
  // short, long, long long?
  
  // Characters - Single quotes
  char letter = 'M'; // - %c
  
  // strings are represented using double quotations, but as an array of characters
  // char name = "John Wick"; - Wrong
  char name[] = "John Wick"; // - Correct - %s

  // A float has less precision than a double, but consumes less memory.
  float temp = 30.5; // - %f
  double balance = 100.55; // - %lf

  printf("Hello, %s!\n", name); // Print a string
}
