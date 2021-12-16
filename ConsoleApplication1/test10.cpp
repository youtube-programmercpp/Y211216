#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* const p = (int*)malloc(100 * sizeof *p);
	if (p) {
		for (int i = 0; i < 100; ++i)
			p[i] = 0;
		free(p);
	}

	FILE* const fp = fopen("NUL", "r");
	if (fp) {

		fclose(fp);

	}
}
