// Practice Array Question for
// cs1511 Semester 2 2017

/* 
 * Your task is to complete the common function
 * which takes in 3 arrays A, B and C and 2 numbers
 * n and m. 
 * A is an array of size n
 * B is an array of size m
 * C is an array of size n+m
 *
 * the function when it ends will have filled array 
 * C with every element that exists in BOTH A and B and
 * returned the size of C
 * If you have done set theory this is called the
 * intersection of A and B. 
 *
 * You can assume all elements in A and B are unique
 * within their respective arrays. 
 * 
 * Example: if A = [1,2,3,4] and B = [3,4,5,6]
 * then C would contain [3,4] and the function would return 2
 * 
 * if A = [1,2,3] and B = [4,5,6], then C is untouched and 
 * the function returns 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int common(int A[], int B[], int C[], int n, int m);

// Add your own tests here
int main(int argc, char* argv[]){
	// test 1
	int A[6] = {0,1,2,3,4,5};
	int B[3] = {0,6,7};
	int C[9] = {-1};
	int res = common(A,B,C,6,3);
	assert(res == 1);
	assert(C[0] == 0);
}


// FILL THIS IN
int common(int A[], int B[], int C[], int n, int m){
	return 0;
}