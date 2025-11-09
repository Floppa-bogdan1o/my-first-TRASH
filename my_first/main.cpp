#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int num = 42, a, b;
	auto& sorokdwa = num;

	std::cout << "yooooo" << std::endl;
	std::cout << "arbuz" << std::endl;
	std::cout << "desat" << std::endl;
	std::cout << "десять" << std::endl;
	std::cout << sorokdwa << std::endl;
	std::cout << "введи число:";
	std::cin >> a; std::cout << std::endl;
	std::cout << "ты ввел:"<< a << std::endl;
	//watermelon
	return 0;
}
