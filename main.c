#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc < 2)
		printf("not enough arguemnts");

	char *arg0 = argv[0];
	char *arg1 = argv[1];

	return 0;
}
