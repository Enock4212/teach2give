/*Write a program that counts the number of vowels in a sentence.
eg " Hello World " => returns 2*/



#include <stdio.h>
#include <ctype.h>

int count_vowels(const char *sentence) {
  int vowel_count = 0;

  while (*sentence) {
    char ch = tolower(*sentence); // Convert to lowercase for case-insensitive counting
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      vowel_count++;
    }
    sentence++;
  }

  return vowel_count;
}

int main() {
  char sentence[100];

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);

  // Remove trailing newline character (if any)
  sentence[strcspn(sentence, "\n")] = '\0';

  int vowel_count = count_vowels(sentence);

  printf("Number of vowels: %d\n", vowel_count);

  return 0;
}
