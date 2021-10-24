#include "export_url.h"
#include <string.h>

#define N 200
#define URL "http"

void export_url(FILE *input_file, FILE *output_file) {
	char string[N];
	char *sp;
	unsigned int i;

	while (fgets(string, N, input_file) != NULL) { // Read a line of input from input_file
		sp = strstr(string, URL); // Search URL in string

		if (sp != NULL) {
			for (i = 0; ; i++) {
				// Write to output_file by truncating
				if (sp[i] == '\0') break;
				if (sp[i] == ' ' || sp[i] == '"') {
					fputc('\n', output_file);
					break;
				}

				fputc(sp[i], output_file);
			}
		}
	}
}
