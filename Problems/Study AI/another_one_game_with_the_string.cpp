// https://codeforces.com/contest/1480/problem/A?locale=ru

// Не проходит тесты на Study AI

#include <iostream>
#include <vector>
#include <string>

void StringConversion(std::string &input) {
	for (size_t letter{}; letter < input.length(); ++letter){
		input[letter] = (!(letter % 2)) ? input[letter] == 'a' ? 'b' : 'a' : input[letter] == 'z' ? 'y' : 'z';
	}
}

int main() {
	size_t n{};
	std::cin >> n;

//    std::vector<std::string> inputs(n);
//    for(auto& input : inputs) {
//        std::cin >> input;
//    }
//    for(auto& input : inputs){
//        StringConversion(input);
//        std::cout << input << std::endl;
//    }
//

	for(size_t i{}; i < n; ++i) {
		std::string input{};
		std::cin >> input;
		StringConversion(input);
		std::cout << input << std::endl;
	}
	return 0;
}