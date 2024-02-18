// https://codeforces.com/contest/116/problem/C?locale=ru
#include <iostream>
#include <vector>

unsigned FindMinAmountOfGroups(std::vector<int> &managers) {
	unsigned currentDepth{}, maxDepth = 1;
	for (unsigned i{}; i < managers.size(); ++i) {
		int counter = i;
		do {
			currentDepth++;
			counter = managers[counter];
		} while (counter != -1);
		if (currentDepth > maxDepth) {
			maxDepth = currentDepth;
		}
		currentDepth = 0;
	}
	return maxDepth;
}


int main() {
	unsigned n{};
	std::cin >> n;
	std::vector<int> managers(n);
	for (unsigned i{}; i < n; ++i) {
		std::cin >> managers[i];
	}
	std::cout << FindMinAmountOfGroups(managers);
}