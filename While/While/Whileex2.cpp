#include <iostream>
using namespace std;
int main()
 {
	//�ȳ��� 10�� ���
	int n = 1;
	//while (1) //���� �ݺ�
	//{
	//	if (n > 10)
	//	{
	//		break;
	//	}
	//	cout << "�ȳ�" << n << endl;
	//	n++;

	//}
	
	//1���� 10���� �հ�
	int sum = 0;
	while (1)
	{
		if (n > 10)
		{
			break;
		}
		sum += n;
		n++;

	}
	cout << "�հ�:" << sum << endl;
}