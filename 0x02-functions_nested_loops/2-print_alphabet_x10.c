#include "holberton.h"
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 */
void print_alphabet_x10(void)
{
 int i;
 char letter;
 for (i = 0; i < 10; i++)
 {
  for (letter = 'a'; letter <= 'z'; letter++)
  {
   _putchar(letter);
  }
  _putchar('\n');
 }
}
