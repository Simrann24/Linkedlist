#include <stdio.h>

int add(int a, int b) {
	
	return a + b;
}

int subtract(int a, int b) {

	return a - b;
}

int multiply(int a, int b) {

	return a * b;
}

int divide(int a, int b) {

	return a/b;
}

void printValue(int a, int b, int (* op)(int, int)) {
	int val = op(a,b);
	printf("%d ", val);
}

int main() {
	
	printValue(2,2, add);

	printValue(3, 3, subtract);

	printValue(1, 2, multiply);

	printValue(6, 3, divide);

	printf("\n");

	return 0;
}



