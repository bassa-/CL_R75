#include <stdio.h>
int sum(int x, int y);
int func(int a);

void main(void) {
	int s;
	printf("s�̃A�h���X�F%p\n", &s);
	s = sum(3, 5);
	printf("s=%d\n", s);
	s = func(10);
	printf("s=%d\n", s);
}
int sum(int x, int y) {
	int z;
	printf("x�̃A�h���X�F%p\n", &x);
	printf("y�̃A�h���X�F%p\n", &y);
	printf("z�̃A�h���X�F%p\n", &z);
	z = x + y;
	return z;
}
int func(int a) {
	int b = a + 1;
	printf("a�̃A�h���X�F%p\n", &a);
	printf("b�̃A�h���X�F%p\n", &b);
	return b;
}