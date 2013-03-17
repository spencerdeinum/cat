#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

struct options {
	unsigned int number_all_input_lines : 1;
	unsigned int number_non_blank_input_lines: 1;
};

int main(int argc, char *argv[])
{
	struct options opts;
	char c;
	while( (c = getopt(argc, argv, "bn")) != EOF )
	{
		switch(c) {
			case 'n':
				opts.number_all_input_lines = 1;
				break;
			case 'b':
				opts.number_non_blank_input_lines = 1;
				break;
		}
	}
	if( argc > 1 ) 
	{
		int lineCount = 0;
		for(int i = 1; i < argc; ++i)
		{
			if(argv[i][0] != '-')
			{
				FILE* f = fopen(argv[i], "r");
				if( f == NULL )
				{
					printf("cat: %s: no such file or directory.\n", argv[i]);
					return -1;
				}
				while((c = fgetc(f)) != EOF)
				{
					if(opts.number_all_input_lines == 1 && c == '\n')
					{
						putchar(c);
						printf("\t%d\t", ++lineCount);
					}
					else
					{
						putchar(c);
					}
				}
				fclose(f);
			}
		}
	}
	else
	{
		while((c = getchar()) != EOF)
		{
			putchar(c);
		}
	}
	return 0;
}
