#define	_CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
int f(int *p)
{
	//����ȗ�
	if (IsBadWritePtr(p, sizeof * p))
		return FALSE;//�啶���� FALSE �� Windows API �ŋK�肳��Ă���
	else
		return scanf("%d", p) == 1;//��������� true�A�s�����̎��� false
}
int* g()
{
}
int main()
{
	int* p = g();
	if (f(p))
		printf("%d �����͂���܂����B\n", *p);
	else
		printf("���������͂���܂���ł����B\n");
}
