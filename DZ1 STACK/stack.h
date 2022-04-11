#pragma once
struct Stack;

void push(Stack*& stack, char value);
bool pop(Stack*& stack, char& value);
bool peek(Stack* stack, char& value);
