#include <iostream>

namespace A
{
	void exFunc()
	{
		std::cout << "A�� ������ �Լ�\n\n";
	}
}

namespace B
{
	void exFunc()
	{
		std::cout << "B�� ������ �Լ�\n\n";
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
}// �и��ؼ� ����ص� ���� namespace�� �����

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

		// a = 8; ���� - ��ȣ��
	}

	int A = 10;
	std::cout << A << std::endl; // 10

	std::cout << ::AA << std::endl; // �������� ȣ�� ���� -- �ʱ�ȭ���� ���� �������� : 0 --> bss

	/*using std::cin;
	using std::cout;
	using std::endl; ----> */ 
	using namespace std; // ��� ���赵�� ������ -- ������ �̸��� ��ĥ ���ɼ� ����

	cout << "hello" << endl;

	return 0;
}