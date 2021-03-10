#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Adjon meg egy parancsot:\n");
	char parancs[128];
    while(true){
        scanf("%s",&parancs);
        system(parancs);
    }
    return 0;
}
