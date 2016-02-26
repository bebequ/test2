#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

// main
int main(int argc, char* argv[])
{
	if (argc < 2)
		printf("not enough arguemnts");
	
	char *arg0 = argv[0];
	char *arg1 = argv[1];
	
	int op1 =10;
	int op2 =5;
	int ret0, ret1, ret2;

	ret0 = add(op0, op1);
	ret1 = sub(op0, op1);
	ret2 = mul(op0, op1);
	
	printf("%d + %d = %d\n", op0, op1, ret0);
	printf("%d - %d = %d\n", op0, op1, ret1);
	printf("%d * %d = %d\n", op0, op1, ret2);
	
	return 0;

}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}
