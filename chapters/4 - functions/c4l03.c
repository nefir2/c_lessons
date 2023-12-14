#include <stdio.h>

void empty_function(int);
short bool_is_s_symbol(char);
char* bool_to_string(int);

int main(void) {
	empty_function(1);
	empty_function(0);
	char x = 's';
	char s = 'x';
	printf("char x: %c\nis x equals s: %s\n\nchar s: %c\nis s equals s: %s\n\n", x, bool_to_string(bool_is_s_symbol(x)), s, bool_to_string(bool_is_s_symbol(s)));
	return 0;
}

void empty_function(int bool_value) {
	if (bool_value) 
	{
		printf("bool_value = true\n\n");
		return;
	}
	printf("bool_value = false\n\n");
	return;
}

short bool_is_s_symbol(char symbol) {
	if (symbol == 's') return 1;
	else return 0;
}

char* bool_to_string(int bool_value) {
	if (bool_value) return "true";
	else return "false";
}
