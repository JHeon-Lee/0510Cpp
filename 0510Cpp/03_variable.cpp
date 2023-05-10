#include <iostream>

int main()
{
	int x = 10; // copy initialization
	int y(10); // direct initialization
	int z{ 10 }; // uniform initialization --> ����ȯ ��� X

	int a = 1.1; // ������ �ȳ��� 0.1�� �߸�
	int b{ 1.1 }; // ����ȯ ������� �����Ƿ� ������

	/*
		limits
	*/
	std::cout << std::numeric_limits<int>::min() << std::endl;
	std::cout << std::numeric_limits<int>::max() << std::endl;
	std::cout << std::numeric_limits<float>::min() << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;

	/*
		Casting(����ȯ)
	*/
	int i = 10;
	float k = 10.1f;

	std::cout << k << std::endl;
	std::cout << (int)k << std::endl; // c++���� �� �Ⱦ�
	std::cout << int(k) << std::endl; // �굵 �� �Ⱦ�
	std::cout << static_cast<int>(k) << std::endl;

	/*
		const vs constexpr
	*/
	const int c1(123); // ��Ÿ�Ӷ� ������
	//c1 = 5;

	int i1 = 10;
	const int c2 = i1; // �׷��� �̷������ε� ����

	int arr1[c1];
	// int arr2[c2]; c2�� ���� �������� �ʾ����Ƿ� �Ұ���

	constexpr float PI1 = 3.141592f; // ������ ����

	float PI2 = 3.141592f;
	// constexpr float PI3 = PI2; �Ұ���

	constexpr int arrSize = 10;
	int arr[arrSize];

	return 0;
}