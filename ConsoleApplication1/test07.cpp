#define	_CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int input()
{
	int n;
	if (scanf("%d", &n) == 1) {
		//����ɓ��͂��ꂽ
		return n;
	}
	else {
		fprintf(stderr, "���ُ͈�\n");
		exit(EXIT_FAILURE);
	}
}
int input2()
{
	int n;
	switch (scanf("%d", &n)) {
	case 0:
		fprintf(stderr, "�����l�Ƃ��ĉ��߂���Ȃ����e�����͂���܂����B\n");
		exit(EXIT_FAILURE);
	case 1:
		//����ɓ��͂��ꂽ
		return n;
	case EOF:
		//�G���[�܂��͓��͏I���
		fprintf(stderr, "EOF���Ԃ���܂����B\n");
		exit(EXIT_FAILURE);
	}
}
int main()
{
	int n = input2();
	printf("%d �����͂���܂����B\n", n);
}
