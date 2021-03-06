#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define ESIZE 500

typedef struct link {
	int data;
	struct link *nextPtr;
} Link, *LinkPtr;

int evaluatePostfixExpression(char expr[ESIZE]);
int calculate(int op0, int op1, char operator);
void push(LinkPtr *topPtr, int value);
int pop(LinkPtr *topPtr);
int isEmpty(LinkPtr topPtr);
void printStack(LinkPtr topPtr);
int isOperator(char c);

int main(void) {
	char postfix[ESIZE] = "50 2 - 4 8 5 1 + - * + 9 +";

	int e = evaluatePostfixExpression(postfix);

	printf("%d\n", e);

}

// Evaluate the postfix expression
int evaluatePostfixExpression(char expr[ESIZE]) {

	LinkPtr list0 = malloc(sizeof(Link));
	list0->data = 0;
	list0->nextPtr = NULL;

	int x = 0;
	int y = 0;

	char* token = strtok(expr, " ");
	while (token != NULL) {

		if (isdigit(token[0])) {
			push(&list0, strtol(token, NULL, 0));
		}
		else if (isOperator(token[0])) {
			y = pop(&list0);
			x = pop(&list0);

			x = calculate(x, y, token[0]);
			push(&list0, x);
		}
		token = strtok(NULL, " ");
	}

	return pop(&list0);
}

// % = 37
// * = 42
// + = 43
// - = 45
// / = 47
// ^ = 94

// Evaluate the expression op0 operator op1.
int calculate(int op0, int op1, char operator) {
	switch (operator) {
	case 37:
		return op0 % op1;
	case 42:
		return op0 * op1;
	case 43:
		return op0 + op1;
	case 45:
		return op0 - op1;
	case 47:
		return op0 / op1;
	case 94:
		// assumes op1 is positive
		while (op1 > 1) {
			op0 = op0 * op0;
			--op1;
		}
		return op0;
	default:
		puts("Calculation error");
		return 0;
	}
}

// Push a value on the stack.
void push(LinkPtr *topPtr, int value) {
	LinkPtr tempPtr = malloc(sizeof(Link));
	tempPtr->data = value;
	tempPtr->nextPtr = *topPtr;
	*topPtr = tempPtr;
}

// Pop a value off the stack.
int pop(LinkPtr *topPtr) {
	int tempInt = (*topPtr)->data;
	LinkPtr tempPtr = *topPtr;
	*topPtr = (*topPtr)->nextPtr;
	free(tempPtr);
	return tempInt;
}

// Determine whether the stack is empty.
int isEmpty(LinkPtr topPtr) {
	if (topPtr == NULL) {
		return 1;
	}
	return 0;
}

// Print the stack.
void printStack(LinkPtr topPtr) {
	while (topPtr->nextPtr != NULL) {
		printf("%4d\n", topPtr->data);
	}
}

int isOperator(char c) {
	if (c == 37 || c == 42 || c == 43 ||
		c == 45 || c == 47 || c == 94) {
		return 1;
	}
	return 0;
}