#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int sum = 66;
	int li;
	char bn[7];
	FILE *book;

	if ((book = fopen("book.csv", "r")) == NULL){
		printf("oops..");
		exit(1);
	}

	fscanf(book, "%[^\n]", bn);
	char *token;
	token = strtok(c, ",");
	char dest[3], src[5];
	strcpy(dest, token);
	strcpy(src, ",1,1");
	strncat(dest, src, 5);
	printf("%s\n", dest);
	fclose(book);

}
