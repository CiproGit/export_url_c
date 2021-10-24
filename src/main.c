#include "export_url.h"
#include "count_url.h"
#include <stdlib.h>

#define PATH_LENGHT 80

int main(void) {
	FILE *input_file;
	FILE *output_file;

	char input_file_path[PATH_LENGHT];
	char output_file_path[PATH_LENGHT];

	printf("******************\n");
	printf("*   EXPORT URL   *\n");
	printf("******************\n");

	printf("\nInsert the input file including path:\n");
	scanf("%s", input_file_path);

	input_file = fopen(input_file_path, "r");
	if (input_file ==  NULL) {
		fprintf(stderr, "Error opening input file\n");
		exit(EXIT_FAILURE);
	}

	printf("\nInsert the output file including path:\n");
	scanf("%s", output_file_path);

	output_file = fopen(output_file_path, "w");
	if (output_file == NULL) {
		fprintf(stderr, "Error creating output file\n");
		exit(EXIT_FAILURE);
	}

	export_url(input_file, output_file);
	rewind(input_file);
	count_url(input_file);

	fclose(input_file);
	fclose(output_file);

	return EXIT_SUCCESS;
}
