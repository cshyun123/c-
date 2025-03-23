#include <iostream>
using namespace std;
int main()
 {
	//안녕을 10번 출력
	int n = 1;
	//while (1) //무한 반복
	//{
	//	if (n > 10)
	//	{
	//		break;
	//	}
	//	cout << "안녕" << n << endl;
	//	n++;

	//}
	
	//1부터 10까지 합계
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
	cout << "합계:" << sum << endl;
}