#include <iostream>

int main()
{
	int x = 10; // copy initialization
	int y(10); // direct initialization
	int z{ 10 }; // uniform initialization --> 형변환 허용 X

	int a = 1.1; // 오류는 안나고 0.1이 잘림
	int b{ 1.1 }; // 형변환 허용하지 않으므로 오류남

	/*
		limits
	*/
	std::cout << std::numeric_limits<int>::min() << std::endl;
	std::cout << std::numeric_limits<int>::max() << std::endl;
	std::cout << std::numeric_limits<float>::min() << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;

	/*
		Casting(형변환)
	*/
	int i = 10;
	float k = 10.1f;

	std::cout << k << std::endl;
	std::cout << (int)k << std::endl; // c++에선 잘 안씀
	std::cout << int(k) << std::endl; // 얘도 잘 안씀
	std::cout << static_cast<int>(k) << std::endl;

	/*
		const vs constexpr
	*/
	const int c1(123); // 런타임때 정해짐
	//c1 = 5;

	int i1 = 10;
	const int c2 = i1; // 그래서 이런식으로도 가능

	int arr1[c1];
	// int arr2[c2]; c2의 값이 정해지지 않았으므로 불가능

	constexpr float PI1 = 3.141592f; // 컴파일 시점

	float PI2 = 3.141592f;
	// constexpr float PI3 = PI2; 불가능

	constexpr int arrSize = 10;
	int arr[arrSize];

	return 0;
}