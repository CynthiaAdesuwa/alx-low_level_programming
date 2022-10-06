#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void _puts(char *str);
void *malloc_checked(unsigned int b);
char *create_array(unsigned int size, char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);

#endif /*MAIN_H*/   
