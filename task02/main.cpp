#include "logic.h"
#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int number;
	int size;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> size;
	} while (size <= 0);

	cout << "Input your number: ";
	cin >> number;

	init_random(array, size, 0, 10);

	print("Array:\n");
	print(convert(array, size));

	print("\n\nCount of non zero elements is ");
	print(to_string(count_elements_great_number(array, size, number)) + ".\n");

	return 0;
}
