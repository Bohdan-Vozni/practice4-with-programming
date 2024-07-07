#include <stdio.h>
int main() {
	int n;
	printf("Input value: ");
	scanf_s("%d", &n);
	if(n<1 || n>150){
		printf("Error");
	    return 13;
	}
	int count=0;
	for (int j = n; j > 0; j--) {
		if (n/j == n%j) {
			count++;
		}
		
	}
	printf("\n%d",count);
	return 0;
}