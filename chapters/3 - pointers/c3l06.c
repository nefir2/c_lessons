#include <stdio.h>

int main(void) {
	//arrays of pointers.
	int a[] = { 'n', 'e', 'w', ' ', 'a', 'r', 'r', 'a', 'y' };
	int* pointers[3];
	int* pointerr[] = { a + 2, a + 7, a + 5 }; 
	int* pointres[9] = { &a[0], &a[8], &a[4], &a[6], &a[7], &a[5], &a[8], &a[7], &a[4] };
	

	printf("sizeof pointres: %d\nsizeof *pointres: %d\n", sizeof(pointres), sizeof(*pointres));
	printf("pointres: %p \t *pointres: %p \t **pointres: %d\n\n", (void*)pointres, (void*)*pointres, **pointres);
	for (int i = 0; i < sizeof(pointres) / sizeof(*pointres); i++) printf("%c", **(pointres + i)); //pointers + i, *pointers, **pointers
	printf("\n\n");
	char* chararr[] = { "first", "second", "third", "fourth", "fifth", "sixth" };
	for (int i = 0; i < 6; i++) printf("%s\n", *(chararr + i));// *(chararr + i) = chararr[i]. 
	printf("\n");
	//manylayered addressation
	//int** ptr;
	int x = 256;
	int* p = &x;
	int** pp = &p;
	printf("&pp: %p\npp: %p\n*pp: %p\n**pp: %d\n\n&p: %p\np: %p\n*p: %d\n\nx: %d\n\n", &pp, (void*)pp, (void*)*pp, **pp, &p, (void*)p, *p, x);

	return 0;
}
