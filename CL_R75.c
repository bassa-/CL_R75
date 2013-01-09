#include <stdio.h>
int sum(int x, int y);
int func(int a);

void main(void) {
	int s;
	printf("sのアドレス：%p\n", &s);
	s = sum(3, 5);
	printf("s=%d\n", s);
	s = func(10);
	printf("s=%d\n", s);
}
int sum(int x, int y) {
	int z;
	printf("xのアドレス：%p\n", &x);
	printf("yのアドレス：%p\n", &y);
	printf("zのアドレス：%p\n", &z);
	z = x + y;
	return z;
}
int func(int a) {
	int b = a + 1;
	printf("aのアドレス：%p\n", &a);
	printf("bのアドレス：%p\n", &b);
	return b;
}