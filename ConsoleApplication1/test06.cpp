#define	_CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#define	DEBUG_NEW	new (_NORMAL_BLOCK, __FILE__, __LINE__)
int main()
{
	_CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
	DEBUG_NEW int;
}
