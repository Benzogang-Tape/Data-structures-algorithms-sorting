//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>

void Merge(int arr[], size_t begin, size_t mid, size_t end) {
	int* helpArr = new int[end + 1];
	for (size_t i = begin; i < mid + 1; ++i)
		helpArr[i] = arr[i];
	for (size_t i = mid + 1; i < end + 1; ++i)
		helpArr[i] = arr[i];
	size_t i = begin, j = mid + 1, k = begin;
	while (i < mid + 1 or j < end + 1) {
		if (i < mid + 1 and (helpArr[i] < helpArr[j] or j >= end + 1))
			arr[k++] = helpArr[i++];
		else
			arr[k++] = helpArr[j++];
	}
	delete[] helpArr;
}

void MergeSort(int arr[], size_t begin, size_t end) {
	if (begin >= end)
		return;
	size_t mid = begin + ((end - begin) / 2);
	MergeSort(arr, begin, mid);
	MergeSort(arr, mid + 1, end);
	Merge(arr, begin, mid, end);
}


int main() {
	size_t arrSize{};
	std::cin >> arrSize;
	int* array = new int[arrSize];
	for (size_t i{}; i < arrSize; ++i) {
		std::cin >> array[i];
	}
	MergeSort(array, 0, arrSize - 1);
	for (size_t i; i < arrSize; ++i) {
		std::cout << array[i] << ' ';
	}
	delete[] array;
}
