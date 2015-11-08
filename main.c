#include <stdio.h>

int add(int, int);
int sub(int, int);

void main(void)
{
	int op1 =10;
	int op2 =5;
	int ret0;
	int ret1;
	
	ret0 = add(op1, op2);
	ret1 = sub(op1, op2);

}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
