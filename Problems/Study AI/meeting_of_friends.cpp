// https://codeforces.com/contest/931/problem/A?locale=ru
#include <iostream>

unsigned TotalTiredness(unsigned a, unsigned b) {
	if (a == b)
		return 0;
	if (a > b)
		std::swap(a, b);
	unsigned totalTiredness{}, tiredness = 1;
	for (tiredness; tiredness <= (b - a) / 2; ++tiredness) {
		totalTiredness += tiredness;
	}
	totalTiredness *= 2;
	if ((b - a) % 2 == 1)
		totalTiredness += tiredness;
	return totalTiredness;
}

int main() {
	unsigned a{}, b{};
	std::cin >> a >> b;
	std::cout << TotalTiredness(a, b);
	return 0;
}