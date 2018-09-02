#include <stdio.h>

int main(void)
{
    FILE * fpointer;
    fpointer = fopen("new.txt","w");
    fprintf(fpointer,"This is a test print");
    fclose(fpointer);
}
	
