#include <stdio.h>
void f(int i)
{
	for (int j = 0; j < i; ++j)
		printf("*");
	printf("\n");
}
int main()
{
	for (int i = 0; i < 10; ++i) {
		f(i);
	}
}
