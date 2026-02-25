#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> size;
	} while (size <= 0);

	init_random(array, size, 0, 100);

	print("Array:\n");
	print(convert(array, size));
	print("\n \nCount of non zero elements is ");
	print(to_string(count_not_zero_elements(array,size)) + ".\n");

	return 0;
}
