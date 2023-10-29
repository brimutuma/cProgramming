/*
Author: Brian Mutuma
Purpose: To solve for x in the quadratic equation
*/
#include <stdio.h>
#include <math.h>
int main(){
	
	int x1, x2, a, b, c, A, B;
	
	//input
	printf ("Enter value for a:");
	scanf ("%d", &a);
	printf ("\nEnter value for b:");
	scanf ("%d", &b);
	printf ("\nEnter value for c:");
	scanf ("%d", &c);
	
	//computation
	A= sqrt(b*b-4*a*c);
	B= sqrt(b*b-4*a*c);
	x1= (-b+A)/2*a;
	x2=(-b-B)/2*a;
	
	//output
	printf ("x=%d, x=%d", x1, x2);
	
	return 0;
	
}

