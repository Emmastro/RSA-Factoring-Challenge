#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

FILE *fp;
char *line = NULL;
size_t len = 0;
ssize_t read;
int product;

if (argc != 2)
{
	printf("You need 1 argument, the file containing the numbers\n");
	return (0);
}

fp = fopen(argv[1], "r");

if (fp == NULL)
{
	printf("Couldn't open file `%s`\n", argv[1]);
	exit(EXIT_FAILURE);
}

while ((read = getline(&line, &len, fp)) != -1) {
	product = atoi(line);
	
}

free(line);
exit(EXIT_SUCCESS);

return 0;
}
