
#include <iostream>

using namespace std;

int main()
{

	int Height = 0;						//변수는 처음에 대문자로 쓰자(cf.중간에도 대문자 - HeightTriangle)
		int Base = 0;

	float Area = 0.0f;						//실수형 타임은 float, double이 있다.double은 용량이 2배 들어간다(3d 엔진에서는 그래서 x - 실시간이 관건이라 최대한 줄여서 낸다)

		cin >> Height;
	cin >> Base;

	Area = (static_cast<float>(Height) * static_cast<float>(Base)) / 2.0f;	//사칙연산 순위도 좋지만 먼저하는건()를 사용하자.무조건 먼저 한다.(ex 4 + (4 / 4))

		cout << Area << endl;
	return 0;
}
