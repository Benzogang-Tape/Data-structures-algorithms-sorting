//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>

void MoveEven(int arr[], size_t arrSize) {
	size_t nextEvenIndex{};
	for (size_t i{}; i < arrSize; ++i) {
		if (arr[i] % 2 == 0) {
			nextEvenIndex++;
			continue;
		}
	}
	for (size_t i{}; i < arrSize; ++i) {
		if (arr[i] % 2 == 0)
			continue;
		for (size_t j = i + 1; j < arrSize; ++j) {
			if (arr[j] % 2 == 0) {
				std::swap(arr[i], arr[j]);
				break;
			}
		}
	}
}


int main() {
	size_t arrSize{};
	std::cin >> arrSize;
	int* array = new int[arrSize];
	for (size_t i{}; i < arrSize; ++i) {
		std::cin >> array[i];
	}
	MoveEven(array, arrSize);
	for (size_t i{}; i < arrSize; ++i) {
		std::cout << array[i] << ' ';
	}
	delete[] array;
}
