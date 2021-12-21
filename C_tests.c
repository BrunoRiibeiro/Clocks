#include <stdio.h>

int fib(int a) {
	if(a == 0) return 0;
	if(a == 1) return 1;
	
	return fib(a - 1) + fib(a - 2);
	
}

int main() {
	int last_number = 10;
	for(int i = 1; i <= last_number; i++){
		int result = fib(i);
		printf("%d\n", result);
	}
	
	
}
