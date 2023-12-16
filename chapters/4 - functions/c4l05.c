#include <stdio.h>

void funnc();
void manyscoper();
void change_PI(float);

const float PI = 3.14;

int main(void) {
	printf("start in main\n");
	char* chars = "chars";
	funnc();
	//printf("%s", str); //cannot do this
	for (int i = 0; i < sizeof(chars) / sizeof(*chars); i++) printf("%c\t%d\n", *(chars + i), *(chars + i));

	manyscoper();
	printf("end in main\n");
	return 0;
}

void funnc() {
	char* str = "function's string.";
	printf("%s\npoint: %p\n", &str);
}

void manyscoper() {
	int in_scope_one;
	{
		char* chars = "in scope two";
		printf("%s", chars);
	}
	for (int i = 0 ; i < in_scope_one; i++) {
		printf("%d ", i);
	}
	printf("\n");

//	printf("%s", chars); //no one variable with this name in this scope
//	i++; //no one variable with this name in this scope
}

void change_PI(float value) {
	float* pPI = &PI;
	*pPI = value;
}
