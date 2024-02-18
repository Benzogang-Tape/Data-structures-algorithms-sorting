//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>

void sort_bad_marks(int array[], size_t arr_size) {
	for (size_t i{}; i < arr_size; ++i){
		if (array[i] == 0) {
			size_t amount_of_Zero{ 1 };
			for(size_t j = i + 1; j < arr_size; ++j) {
				if (array[j] != 0 or j == arr_size - 1)
					break;
				amount_of_Zero++;
			}
			for (size_t k = i + amount_of_Zero; k < arr_size; ++k) {
				array[k - amount_of_Zero] = array[k];
			}
			for (size_t l{}; l < amount_of_Zero; ++l) {
				array[arr_size - l - 1] = 0;
			}
		}
	}
}


int main() {
	size_t arrSize{};
	std::cin >> arrSize;
	int *array = new int[arrSize];
	for (size_t i{}; i < arrSize; ++i)
		std::cin >> array[i];
	sort_bad_marks(array, arrSize);
	for (size_t i{}; i < arrSize; ++i)
		std::cout << array[i] << ' ';
	delete[] array;
	return 0;
}
