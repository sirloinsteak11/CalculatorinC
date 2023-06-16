#include<stdio.h>
#include<time.h>

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
	clock_t start, end;
	start = clock();
	int num1, num2;
	char operation;
	int result;
		
	// introductory message plus enter message
	printf("Format: x operation y = sum...\nenter what you want to calculate: ");

	// collects integer input and saves it to num1 and num2
	scanf("%d %c %d", &num1, &operation, &num2);
	
	printf("%d %c %d = %d\n", num1, operation, num2, calculateNumbers(num1, operation, num2));

	end = clock();
	double duration = ((double)end - start)/CLOCKS_PER_SEC;
	printf("Time taken to execute in seconds: %f\n", duration);

	return 0;
}
