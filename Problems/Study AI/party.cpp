// https://codeforces.com/contest/116/problem/C?locale=ru
#include <iostream>
#include <vector>

unsigned FindMinAmountOfGroups(std::vector<int> &managers) {
	unsigned currentDepth{}, maxDepth = 1;
	for (unsigned i = 1; i < managers.size(); ++i) {
		int counter = static_cast<int>(i);
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
	std::vector<int> managers(n + 1);
	for (unsigned i = 1; i < n + 1; ++i) {
		std::cin >> managers[i];
	}
	std::cout << FindMinAmountOfGroups(managers);
}