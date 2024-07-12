#include <stdio.h>
#include <stdlib.h>
#include "types.h"



void fetchSource(const char *filePath) {
    FILE *file = fopen(filePath, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

void main (int argc, char* argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <relative_path_to_file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	printFileContents(argv[1]);
}