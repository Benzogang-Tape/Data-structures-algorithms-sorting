//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>

size_t find_elem(const int array[], size_t arr_size, int element) {
	size_t counter{};
	for (size_t i{}; i < arr_size; ++i){
		if (array[i] != element)
			counter++;
	}
	return counter;
}


int main() {
	size_t arrSize{};
	std::cin >> arrSize;
	int *array = new int[arrSize], elem{};
	for (size_t i{}; i < arrSize; ++i)
		std::cin >> array[i];
	std::cin >> elem;
	std::cout << find_elem(array, arrSize, elem);
	delete[] array;
	return 0;
}
