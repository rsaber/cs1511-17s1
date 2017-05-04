/*
	Sample Prac Question
	Week 5 COMP1917 16s2
	any issues, email rsaber@cse.unsw.edu.au
	but email your tutor first
	
	Write a function that takes in an array and its length and
	return the missing number in that array. An array of length n
	will contain elements 1,2,3,4,...,n (but not necessarily in that order).

	You will not be given an array which does not have a missing number.

	Massive hint: a missing element will affect the size of the array.

	Compile with: gcc -Wall -Werror -o missing missing.c
*/

#include <stdio.h>
#include <assert.h>

int missingNumber(int *array, int size){

}

// Don't touch these!
int main(){
	int a1[] = {1,2,3,4,5,7,8,9,10,11};
	int a2[] = {11,10,9,1,3,2,4,5,6,8};

	assert(missingNumber(a1,10) == 6);
	assert(missingNumber(a2,10) == 7);

	printf("Congrats you passed!\n");

	return 0;
}