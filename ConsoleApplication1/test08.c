#define	_CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
int f(int *p)
{
	//特殊な例
	if (IsBadWritePtr(p, sizeof * p))
		return FALSE;//大文字の FALSE は Windows API で規定されている
	else
		return scanf("%d", p) == 1;//成立すると true、不成立の時は false
}
int* g()
{
}
int main()
{
	int* p = g();
	if (f(p))
		printf("%d が入力されました。\n", *p);
	else
		printf("正しく入力されませんでした。\n");
}
