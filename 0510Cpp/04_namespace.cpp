#include <iostream>

namespace A
{
	void exFunc()
	{
		std::cout << "A가 정의한 함수\n\n";
	}
}

namespace B
{
	void exFunc()
	{
		std::cout << "B가 정의한 함수\n\n";
	}
}

namespace myNamespace1
{
	int a;

	namespace AA
	{
		namespace BB
		{
			namespace CC
			{
				int c;
			}
		}
	}
}

namespace myNamespace2
{
	int a;
}

namespace myNamespae1
{
	int hello;
}// 분리해서 사용해도 같은 namespace에 저장됨

int AA;

int main()
{
	A::exFunc();
	B::exFunc();

	myNamespace1::AA::BB::CC::c;

	myNamespace1::a = 10;
	myNamespace2::a = 20;

	{
		using namespace myNamespace1;

		a = 5;

		myNamespace2::a = 1;

		using namespace myNamespace2;

		// a = 8; 오류 - 모호성
	}

	int A = 10;
	std::cout << A << std::endl; // 10

	std::cout << ::AA << std::endl; // 전역변수 호출 가능 -- 초기화하지 않은 전역변수 : 0 --> bss

	/*using std::cin;
	using std::cout;
	using std::endl; ----> */ 
	using namespace std; // 대신 위험도가 높아짐 -- 변수와 이름이 겹칠 가능성 있음

	cout << "hello" << endl;

	return 0;
}