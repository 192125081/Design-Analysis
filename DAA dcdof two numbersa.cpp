#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter only two positive integers: ");
	scanf("%d%d", &a, &b);
	while(a!=b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	printf("GCD of given two numbers is: %d", a);
	return 0;
}
