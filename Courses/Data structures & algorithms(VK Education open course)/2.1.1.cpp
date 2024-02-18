//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>


int FindLastEvenElem(size_t arrSize = {}) {
	/* Дан массив не отсортированных целых чисел. Написать функцию, которая вернет первое с конца четное число.
	 * При написании кода используйте принцип стека. Если массив не содержит четного числа возвращать -1.*/

	int lastEven{ -1 };
	for (size_t i{}; i < arrSize; ++i) {
		int currentElem{};
		std::cin >> currentElem;
		if (currentElem % 2 == 0)
			lastEven = currentElem;
	}
	return lastEven;
}


int main() {
	size_t arrSize{};
	std::cin >> arrSize;
	std::cout << FindLastEvenElem(arrSize);
	return 0;
}
