#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
	if(!system("dir")){
		printf("a parancs mukodik");
	}
    system("dattte");
    ch=getchar();
    return 0;
}
