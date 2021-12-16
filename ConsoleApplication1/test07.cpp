#define	_CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int input()
{
	int n;
	if (scanf("%d", &n) == 1) {
		//正常に入力された
		return n;
	}
	else {
		fprintf(stderr, "入力異常\n");
		exit(EXIT_FAILURE);
	}
}
int input2()
{
	int n;
	switch (scanf("%d", &n)) {
	case 0:
		fprintf(stderr, "整数値として解釈されない内容が入力されました。\n");
		exit(EXIT_FAILURE);
	case 1:
		//正常に入力された
		return n;
	case EOF:
		//エラーまたは入力終わり
		fprintf(stderr, "EOFが返されました。\n");
		exit(EXIT_FAILURE);
	}
}
int main()
{
	int n = input2();
	printf("%d が入力されました。\n", n);
}
