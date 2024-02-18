// https://codeforces.com/contest/644/problem/A?locale=ru
#include <iostream>

void CanSitOut(size_t n, size_t a, size_t b) {
	if (n > a * b) {
		std::cout << -1;
		return;
	}
	size_t counter = 1;
	if (b % 2) {
		for (size_t i{}; i < a; ++i) {
			for (size_t j{}; j < b; ++j) {
				if (counter > n) {
					std::cout << 0 << ' ';
				} else {
					std::cout << counter << ' ';
					counter++;
				}
			}
			std::cout << std::endl;
		}
	}
	else {
		for (size_t i{}; i < a; ++i) {
			if (i % 2) {
				for (size_t j{}; j < b; j += 2) {
					if (counter > n) {
						std::cout << 0 << ' ' << 0 << ' ';
					}
					else {
						std::cout << ((counter + 1 > n) ? 0 : counter + 1) << ' ';
						counter++;
						std::cout << counter - 1 << ' ';
						counter++;
					}
				}
			}
			else {
				for (size_t j{}; j < b; ++j) {
					if (counter > n) {
						std::cout << 0 << ' ';
					} else {
						std::cout << counter << ' ';
						counter++;
					}
				}
			}
			std::cout << std::endl;
		}
	}
}

int main() {
	size_t n{}, a{}, b{};
	std::cin >> n >> a >> b;
	CanSitOut(n, a, b);
	return 0;
}

/*
void CanSitOut(size_t n, size_t a, size_t b) {
    if (a * b < n) {
        std::cout << -1;
        return;
    }

    for (size_t i = 0; i < a; ++i) {
        for (size_t j = 0; j < b; ++j) {
            size_t seatNumber = i * b + (i % 2 == 0 ? j : b - j - 1) + 1;
            std::cout << (seatNumber <= n ? seatNumber : 0) << ' ';
        }
        std::cout << std::endl;
    }
}
*/