#include <stdio.h>

int main(void) {
	//+ - ++ --
	int x = (int)('s'+'o'+'m'+'e'+' '+'i'+'n'+'t');
	printf("x = %d\n\n", x);
	int *ptr = &x;
	char ans = ' ';
	while (1) {
		printf("ptr = %p\n*ptr = %d\n", (void*)ptr, *ptr);
		scanf("%c", &ans);
		if (ans == '+') ptr++; //++ == ptr + sizeof(typeof(*ptr))
		else if (ans == '-') ptr--; //-- = ptr - sizeof(typeof(*ptr))
		else if (ans == 'q') break;
		//else return 127;
	}
	
	double d = .0;
	double* ptrd = &d;
	printf("daddress = %p\ndvalue = %lf\n", (void*)ptrd, *ptrd);
	ptrd++;
	printf("daddress++:\ndaddress = %p\ndvalue = %lf\n", (void*)ptrd, *ptrd);

	char c = ' ';
	char* ptrc = &c;
	printf("caddress = %p\ncvalue = %c\n", (void*)ptrc, *ptrc);
	ptrc++;
	printf("caddress++:\ncaddress = %p\ncvalue = %c\n\n", (void*)ptrc, *ptrc);
	
	ptrd+=2; //+ 2 = ptrd + (sizeof(typeof(*ptrd) * 2)
	printf("daddress + 2:\ndaddress = %p\ndvalue = %lf\n\n", (void*)ptrd, *ptrd);

	//ptrd += (ptrd - 1); //no.
	
	int y = (int)('n' + 'e' + 'w' + ' ' + 'i' + 'n' + 't');
	int* ptr1 = &y; 
	printf("ptr - ptr1 = %d\n\n", ptr - ptr1); //(int)(ptr - ptr1) = (ptr - ptr1) / sizeof(typeof(*ptr))
	
	int z = *ptr1++; //reads from right to left. (*ptr1, z = *ptr1, ptr1 = ptr1 + 1(postfix increment))
	printf("z = %d\n", z);
	printf("ptr1 = %p\n*ptr1 = %d\n", (void*)ptr1, *ptr1);
	ptr1--;
	z = (*ptr1)++; //*ptr1, z = *ptr1, *ptr1 = *ptr1 + 1
	printf("z = %d\nptr1 = %p\n*ptr1 = %d\n", z, (void*)ptr1, *ptr1);
	
	z = ++*ptr1; //*ptr1, *ptr1 = *ptr1 + 1, z = *ptr1
	printf("z = %d\nptr1 = %p\n*ptr1 = %d\n", z, (void*)ptr1, *ptr1);
	
	z = *++ptr1; //ptr1 = ptr1 + 1(prefix increment), *ptr1, z = *ptr1
	printf("z = %d\nptr1 = %p\n*ptr1 = %d\n\n", z, (void*)ptr1, *ptr1);
	
	return 0;
}
