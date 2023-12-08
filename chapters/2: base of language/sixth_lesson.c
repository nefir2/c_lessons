#include <stdio.h>

int main(void) {
	int a = 67, b = 33;
	int c = a + b + 25;
	printf("a + b + 25 = %d\n", c);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	int d = 100 / 3;
	int e = 25.0 / 3.0;
	printf("100 / 3 = %%d: %d\n25.0 / 3.0 = %%f: %f\n\n", d, e);

	float f = 25 / 3;
	float g = 17.0 / 2;
	printf("25 / 3 = %%f: %f\n17.0 / 2 = %%f: %f\n\n", f, g);

	printf("18 % 3: %d\n\n", 18 % 3);
	
	printf("1 + 2 * 3: %d\n", 1 + 2 * 3);
	printf("(1 + 2) * 3: %d\n\n", (1 + 2) * 3);

	int h = 8;
	printf("h: %d\n++h: %d\nh++: %d\nh: %d\n", h, ++h, h++, h);
	int i = h;
	printf("i: %d\n--i: %d\ni--: %d\ni: %d\n\n", i, --i, i--, i);

	printf("a+++b: %d\na: %d\nb: %d\n", a+++b, a, b); //same to this is: a++ + b

	return 0;
}
