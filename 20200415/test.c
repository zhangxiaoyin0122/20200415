#include <stdio.h>
#include <stdlib.h>
int main() {
	//int n = 10;
//char* pc = (char*)&n;
//int* pi = &n;
//printf("%p\n", &n);
//printf("%p\n", pc);
//printf("%p\n", pc + 1);
//printf("%p\n", pi);
//printf("%p\n", pi + 1);
	int n = 0x11223344;
	char* pc = (char*)&n;
	char* pi = &n;
	*pc = 0x55;
	*pi = 0;
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdio.h>
int main() {

	char n;
	while (~scanf("%c", &n)) {
		getchar();
		if ((('A' <= n) && (n <= 'Z')) || (('a' <= n) && (n <= 'z'))) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b;
	scanf("a=%d,b=%d", &a, &b);
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d,b=%d", a, b);
	system("pause");
	return 0;
}