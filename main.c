#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(int argc, char* argv[])
{
	if (argc < 3)
		printf("not enough arguemnts");
	
	printf("%s program start \n", argv[0]);
	char *arg1 = argv[1];
	char *arg2 = argv[2];
	int op1 = atoi(arg1);
	int op2 = atoi(arg2);
	int ret0;
	int ret1;
	
	ret0 = add(op1, op2);
	ret1 = sub(op1, op2);
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
