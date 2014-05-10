#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int usage() {
	fprintf(stderr, "usage: base-conv [<options>] [<numbers>]\n");
	fprintf(stderr, "\n-2\t--binary\t\tconvert decimal number to binary\n");
	fprintf(stderr, "-8\t--hexadecimal\t\tconvert decimal number to hexadecimal\n");
	fprintf(stderr, "-h\t--help\t\t\tprint the help menu\n\n");

	return 1;
}

int toBinary(int decimal) {
	if(decimal <= 0) {
		return 0;
	}
	return toBinary(decimal/2) * 10 + (decimal % 2);
}

int main(int argc, char *argv[]) {
	int decimal = 0001;
	int binary = 0;

	fprintf(stdout, "%d\n", toBinary(decimal));


	return 0;
}
