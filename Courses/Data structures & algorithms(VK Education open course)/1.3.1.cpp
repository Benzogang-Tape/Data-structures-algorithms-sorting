//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>

void InsertionSort(int arr[], const size_t arrSize) {
	for (int i = 1; i < arrSize; ++i) {
		int currentElem = arr[i];
		int j = i - 1;
		while (j >= 0 and arr[j] > currentElem) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = currentElem;
	}
}

int main(){
	size_t arrSize{};
	std::cin >> arrSize;
	int* array = new int[arrSize];
	for (size_t i{}; i < arrSize; ++i) {
		std::cin >> array[i];
	}
	InsertionSort(array, arrSize);
	for (size_t i{}; i < arrSize; ++i) {
		std::cout << array[i] << ' ';
	}
	delete[] array;
	return 0;
}
