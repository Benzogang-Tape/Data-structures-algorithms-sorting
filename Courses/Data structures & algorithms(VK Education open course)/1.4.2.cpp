//
// Created by DJ Tape on 15.02.2024.
//
#include <iostream>
#include <vector>
#include <iomanip>

struct Book {
	std::string ISBN{};
	std::string title{};
	unsigned publicationYear{};
};

void Merge(std::vector<Book>& books, size_t begin, size_t mid, size_t end) {
	std::vector<Book> helpArr(end + 1);
	for (size_t i = begin; i < mid + 1; ++i)
		helpArr[i] = books[i];
	for (size_t i = mid + 1; i < end + 1; ++i)
		helpArr[i] = books[i];
	size_t i = begin, j = mid + 1, k = begin;
	while (i < mid + 1 or j < end + 1) {
		if (i < mid + 1 and (helpArr[i].publicationYear < helpArr[j].publicationYear or j >= end + 1))
			books[k++] = helpArr[i++];
		else if (helpArr[i].publicationYear == helpArr[j].publicationYear)
			books[k++] = helpArr[i].title < helpArr[j].title ? helpArr[i++] : helpArr[j++];
		else
			books[k++] = helpArr[j++];
	}
}

void MergeSort(std::vector<Book>& books, size_t begin, size_t end) {
	if (begin >= end)
		return;
	size_t mid = begin + ((end - begin) / 2);
	MergeSort(books, begin, mid);
	MergeSort(books, mid + 1, end);
	Merge(books, begin, mid, end);
}


int main() {
	size_t amount_of_books{};
	std::cin >> amount_of_books;
	std::vector<Book> books(amount_of_books);
	for (auto& book : books) {
		std::cin >> book.ISBN >> std::quoted(book.title) >> book.publicationYear;
	}
	MergeSort(books, 0, books.size() - 1);
	for (const auto& book : books) {
		std::cout << book.ISBN << ' ' << std::quoted(book.title) << ' ' << book.publicationYear << std::endl;
	}
	return 0;
}
