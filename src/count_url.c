#include "count_url.h"
#include <string.h>

#define N 200
#define URL "http"

void count_url(FILE *input_file) {
	char string[N];
	char *sp;
	unsigned int count = 0;

	while (fgets(string, N, input_file) != NULL) { // Read a line of input from input_file
		sp = strstr(string, URL); // Search URL in string

		if (sp != NULL) count++; // Count URLs
	}

	printf("Number of URLs found: %u\n", count);
}
