#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) { //argc - length of arguments, argv - arguments. argv[0] - name of program.
	if (argc == 1) return 1;
	else if (argc == 2) return atoi(argv + 1);
	else printf("too many arguments.");
	return -1;
}
