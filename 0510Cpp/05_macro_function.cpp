#include <iostream>

#define RED 1
#define MUL1(a,b) a+b // 호출되면 치환되서 그대로 들어감
#define MUL2(a,b) ((a) + (b))

#define MAX(a,b) (((a) > (b)) ? (a) : (b)) // 인라인화. 가독성이 구림, 디버깅이 안됨
// c 스타일

using namespace std;

//inline
inline int Max(int a, int b)
{
	return a > b ? a : b;
}

float Max(float a, float b) // 최신 컴파일러에선 inline 생략해도 적용됨
{
	return a > b ? a : b;
}

int main()
{
	cout << MUL1(1, 2) << endl;
	cout << MUL1(1, 2) * MUL1(1, 2) << endl; // 1 + 2 * 1 + 2 로 인식되서 5가 나옴
	// 괄호를 잘 써야함
	cout << MUL2(1, 2) * MUL2(1, 2) << endl;

	cout << Max(1, 2) << endl;

	return 0;
}