/* 
Author: Brian Mutuma. 
Purpose: Program to calculate circumference and area of a circle.
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int r, pi, c, a, d; 
	//where; r- radius, c- circumference, a- area, d- diameter
	
	//user input
	printf ("Enter the radius of the circle:");
	scanf ("%d", &r);
	
	//computation
	pi= 3.142;
	d= r+r;
	c= pi*d;
	a= pi*r*r;
	
	//output
	printf ("The Circumference of the Circle is: %d \nThe Area of the Circle is %d", c, a);
	
	return 0; 	
}
