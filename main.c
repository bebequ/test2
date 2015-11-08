#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(int argc, char* argv[])
{
	if (argc < 2)
		printf("not enough arguemnts");
	
	char *arg0 = argv[0];
	char *arg1 = argv[1];
	
	int op1 =10;
	int op2 =5;
	int ret0;
	int ret1;
	
	ret0 = add(op1, op2);
	ret1 = sub(op1, op2);
	
	printf("%d + %d = %d\n", op1, op2, ret0);
	printf("%d - %d = %d\n", op1, op2, ret1);
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
