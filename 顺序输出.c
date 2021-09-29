#include<stdio.h>
int main()
{
	int mask = 1;
	int x;
	int d;
	int t;
	scanf_s("%d", &x);
	t = x;
	while(x>9)
	{
		x /= 10;
		mask *= 10;
	} 
	x = t;
	printf("mask的值为%d\n", mask);
	do
	{
		d = x / mask;
		x %= mask;
		mask /= 10;
		printf("%d", d);
	} while (mask > 0);
	return 0;
}
