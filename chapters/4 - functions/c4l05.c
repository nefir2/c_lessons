#include <stdio.h>

void funnc();
void manyscoper();
void change_PI(float);
void print_PI();
void smfnc();
void write_title(char*);

const float PI = 3.14f;

int main(void) {
	printf("start in main\n");
	write_title("chars and funnc");
	char* chars = "chars";
	funnc();
	//printf("%s", str); //cannot do this
	for (int i = 0; i < sizeof(chars) / sizeof(*chars); i++) printf("%c\t%d\n", *(chars + i), *(chars + i));
	write_title("manycsopes:");
	manyscoper();

	write_title("PI plays:");
	print_PI();
	change_PI(5.74f);
	print_PI();

	write_title("smfnc:");
	smfnc();
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
	printf("changing value to PI(%f) . . . \n", PI);
	float* pPI = &PI;
	printf("addr: %p\n", (void*)pPI);
	*pPI = value; //core dump
	printf("changed(%f).\n", PI);
}

void print_PI() {
	printf("writing PI . . . \n");
	printf("PI: %f\n", PI);
	printf("written.\n");
}

void smfnc() {
	int x = 5;
	printf("pi: %f \t addr: %p\n", PI, &PI);
	int PI = 3;
	printf("pi: %f \t addr: %p\n", PI, &PI);
	int* px;
	printf("x: %d \t addr: %p\n", x, &x);
	{
		int x = 10;
		printf("x: %d \t addr: %p\n", x, &x);
		px = &x;
	}
	printf("after code block:\nx from code block: %d\naddr: %p\n\n", *px, (void*)px); 
	printf("x: %d \t addr: %p\n", x, &x);
}

void write_title(char* str) {
	printf("\n\n\t%s\n\n", str);
}
