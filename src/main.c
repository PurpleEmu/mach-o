#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("usage: %s <mach-o>\n", argv[0]);
		exit(0);
	}
	FILE *file = fopen(argv[1], "rb");
	if(!file)
	{
		printf("FATAL: unable to open%s", argv[1]);
		exit(0);
	}
	/* identifying headers is broken as fuck right now so i'm not gonna include it rn */
}
