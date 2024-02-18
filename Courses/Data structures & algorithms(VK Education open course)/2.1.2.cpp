//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>


void DeleteSequencesOfIdenticalCharacters(std::string &input) {
	/* Дана строка s. Строка состоит из английских букв в нижнем регистре.Необходимо из строки удалить все рядом стоящие повторяющиеся буквы.
	 * Например, в строке xyyx мы должны удалить yy, а после и оставшиеся xx и того после должна получиться пустая строка.
	 * Или же в строке fqffqzzsd после удаления остануться только fsd.
	 * Первыми удаляться ff, являющимися третьими и четвертыми символами, затем qq и после уже zz.*/

	for (auto i = input.begin(); i <= input.end(); ++i) {
		if (*(i + 1) == *i) {
			size_t consistencyLength = 2;
			for (auto j = i + 2; *j == *i; ++j) {
				consistencyLength++;
			}
			input.erase(i, i + consistencyLength);
			if (i - 2 >= input.begin())
				i -= 2;
			else
				i = input.begin() - 1;
		}
	}
}


int main() {
	std::string input{};
	std::cin >> input;
	DeleteSequencesOfIdenticalCharacters(input);
	std::cout << input;
	return 0;
}
