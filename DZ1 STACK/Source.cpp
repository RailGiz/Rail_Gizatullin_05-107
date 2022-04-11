#include <iostream>
#include "stack.h"
using namespace std;
struct Stack
{
    char value;
    Stack* next = nullptr;
};

void push(Stack*& stack, char value)
{
    auto* newel = new Stack;
    newel->value = value;
    if (stack) newel->next = stack;
    stack = newel;
}

bool pop(Stack*& stack, char& value)
{
    if (stack == nullptr)
        return false;

    value = stack->value;
    stack = stack->next;
}

bool peek(Stack* stack, char& value)
{
    if (stack == nullptr)
        return false;

    value = stack->value;
}

