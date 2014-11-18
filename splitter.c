#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	char line[500];
	FILE *f = fopen("21986na.mes","r");

	int i = 0;
	while(fgets(line, sizeof line, f))
	{
		char fileName[500];
		sprintf(fileName, "%d", i);
		FILE *f2 = fopen(fileName, "a+");
		fputs(strtok(line, "\n"), f2);
		fclose(f2);
		i++;
	}

	fclose(f);
	
	return 0;
}
