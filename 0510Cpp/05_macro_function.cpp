#include <iostream>

#define RED 1
#define MUL1(a,b) a+b // ȣ��Ǹ� ġȯ�Ǽ� �״�� ��
#define MUL2(a,b) ((a) + (b))

#define MAX(a,b) (((a) > (b)) ? (a) : (b)) // �ζ���ȭ. �������� ����, ������� �ȵ�
// c ��Ÿ��

using namespace std;

//inline
inline int Max(int a, int b)
{
	return a > b ? a : b;
}

float Max(float a, float b) // �ֽ� �����Ϸ����� inline �����ص� �����
{
	return a > b ? a : b;
}

int main()
{
	cout << MUL1(1, 2) << endl;
	cout << MUL1(1, 2) * MUL1(1, 2) << endl; // 1 + 2 * 1 + 2 �� �νĵǼ� 5�� ����
	// ��ȣ�� �� �����
	cout << MUL2(1, 2) * MUL2(1, 2) << endl;

	cout << Max(1, 2) << endl;

	return 0;
}