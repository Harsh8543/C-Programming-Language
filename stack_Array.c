#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Stack {
    int *arr;
    int top;
    int size;
};
struct Stack* createStack(int size) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->size = size;
    stack->arr = (int*)malloc(stack->size * sizeof(int));
    stack->top = -1;
    return stack;
}
void push(struct Stack* stack, int element) {
    if (stack->size - stack->top > 1) {
        stack->top++;
        stack->arr[stack->top] = element;
    } else {
        printf("Stack Overflow\n");
    }
}
void pop(struct Stack* stack) {
    if (stack->top >= 0) {
        stack->top--;
    } else {
        printf("Stack Underflow\n");
    }
}
int peek(struct Stack* stack) {
    if (stack->top >= 0) {
        return stack->arr[stack->top];
    } else {
        printf("Stack is Empty\n");
        return -1;
    }
}
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int main() {
    struct Stack* stack = createStack(5);
    push(stack, 22);
    push(stack, 43);
    push(stack, 44);
    printf("Top element: %d\n", peek(stack));
    pop(stack);
    printf("Top element after pop: %d\n", peek(stack));

    pop(stack);
    printf("Top element after pop: %d\n", peek(stack));

    pop(stack);
    printf("Top element after pop: %d\n", peek(stack));

    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack is not Empty\n");
    }
    free(stack->arr);
    free(stack);

    return 0;
}
