#include <stdio.h>
#define MAX 1024*1024*1024

typedef int (*function_ptr)(int, int);

int function_a(int a, int b) {
	return a +b;
}

int main() {
	function_ptr function_array[] = {function_a};
	unsigned int ret = 0;
	int choice = 0;

	for (int i = 0 ; i < MAX; i++)
		ret += function_array[choice](ret, 1);

	return ret;
}
