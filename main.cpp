
#include <iostream>

using namespace std;

int main()
{

	int Height = 0;						//������ ó���� �빮�ڷ� ����(cf.�߰����� �빮�� - HeightTriangle)
		int Base = 0;

	float Area = 0.0f;						//�Ǽ��� Ÿ���� float, double�� �ִ�.double�� �뷮�� 2�� ����(3d ���������� �׷��� x - �ǽð��� �����̶� �ִ��� �ٿ��� ����)

		cin >> Height;
	cin >> Base;

	Area = (static_cast<float>(Height) * static_cast<float>(Base)) / 2.0f;	//��Ģ���� ������ ������ �����ϴ°�()�� �������.������ ���� �Ѵ�.(ex 4 + (4 / 4))

		cout << Area << endl;
	return 0;
}
