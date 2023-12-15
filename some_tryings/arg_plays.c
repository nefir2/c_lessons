#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	for (int i = 0; i < argc; i++) printf("argc: %d \t argv[%d]: %s\n", argc, i, argv[i]);
	return 0;
}
