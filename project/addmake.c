#include <stdio.h>
#include <addmake.h>

int main() {
	int a, b, c;
 
	printf("Enter two numbers to add\n");
	
	scanf("%d%d",&a,&b);
 
	c = addTwoNum(a, b);
 
	printf("Sum of entered numbers = %d\n",c);
 
	return 0;

}
