#include <iostream>

int main()
{
	// cout << : output operator

	// cin >> : input operator
	int a;
	std::cin >> a;
	std::cout << "a : " << a << std::endl;

	int num = 100;

	std::cout << std::oct << num << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	// 진수 출력 조정자
	
	std::cout << std::showbase << std::showpos;
	// 진수 표기
	std::cout << std::oct << num << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::noshowbase << std::showpos;
	// 해제

	bool isTrue = true;
	bool isFalse = true;

	std::cout << isTrue << std::endl;
	std::cout << isFalse << std::endl;

	std::cout << std::boolalpha;
	// bool을 숫자가 아닌 알파벳으로 표기
	std::cout << isTrue << std::endl;
	std::cout << isFalse << std::endl;
	std::cout << std::noboolalpha;
	// 해제

	return 0;
}