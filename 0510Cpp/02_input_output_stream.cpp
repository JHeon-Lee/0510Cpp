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
	// ���� ��� ������
	
	std::cout << std::showbase << std::showpos;
	// ���� ǥ��
	std::cout << std::oct << num << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::noshowbase << std::showpos;
	// ����

	bool isTrue = true;
	bool isFalse = true;

	std::cout << isTrue << std::endl;
	std::cout << isFalse << std::endl;

	std::cout << std::boolalpha;
	// bool�� ���ڰ� �ƴ� ���ĺ����� ǥ��
	std::cout << isTrue << std::endl;
	std::cout << isFalse << std::endl;
	std::cout << std::noboolalpha;
	// ����

	return 0;
}