#include <stdio.h>

int main(int argc, char *argv[])
{
	if( argc > 1 ) 
	{
		for(int i = 1; i < argc; ++i)
		{
			FILE* f = fopen(argv[i], "r");
			char c;
			while((c = fgetc(f)) != EOF)
			{
				putchar(c);
			}
			fclose(f);
		}
	}
	else
	{
		char c;
		while((c = getchar()) != EOF)
		{
			putchar(c);
		}
	}
	return 0;
}
