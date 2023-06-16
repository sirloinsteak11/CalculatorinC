#include<stdio.h>

int calculateNumbers(int x, char y, int z) {
	int result;
	printf("calulating %d %c %d...\n", x , y , z);
	switch (y) {
		case '+':
			result = x + z;
			break;
		case '-':
			result = x - z;
			break;
		case '*':
			result = x * z;
			break;
		case '/':
			result = x / z;
			break;
	}
	printf("calculateNumbers function returns %d\n", result);
	return result;
}

int main() {
	int num1, num2;
	char operation;
	int result;
		
	// introductory message plus enter message
	printf("Format: x operation y = sum...\nenter what you want to calculate: ");

	// collects integer input and saves it to num1 and num2
	scanf("%d %c %d", &num1, &operation, &num2);
	
	printf("%d %c %d = %d\n", num1, operation, num2, calculateNumbers(num1, operation, num2));
		
	return 0;
}
