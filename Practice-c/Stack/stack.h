#ifndef STACK_H
#define STACK_H

# include <stdio.h>
# include <stdlib.h>

#define MAX 4

int isFull();
int isEmpty();
int peek();
void push(int data);
int pop(void);
void print(void);

#endif