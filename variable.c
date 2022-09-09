//Author: Jake Harrell
//Date: 9/6/22
//Purpose: Variable Program

#include <stdio.h>

int main(){
	char first_test, second_test, third_test;
	int first_per, second_per, third_per, avg;
	first_test = 'A';
	second_test = 'B';
	third_test = 'A';
	first_per = 95;
	second_per = 88;
	third_per = 94;
	avg = (first_per+second_per+third_per)/3; 
	printf("First test: %c %d \n", first_test, first_per);
	printf("Second test: %c %d \n", second_test, second_per);
	printf("Third test: %c %d \n", third_test, third_per);
	printf("Average on tests: %d \n", avg);
	return 0;
}
