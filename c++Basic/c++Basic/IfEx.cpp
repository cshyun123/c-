#include <iostream>
using namespace std;

int main()
{
	//나이가 15세 이상이면 "관람가" 판정

	//int age = 16
	cout << "나이를 입력하세요: ";
	cin >> age;


	if (age >= 15)//true -1
	{
		cout << "관람가입니다" << endl;
	}

	cout << "나이는 " << age << " 세 입니다.\n";

	//나이가 15세 이상이면 관람가 그렇지 않으면 관람불가
	//if-else문
	if (age >= 15)
	{
		cout << "관람가입니다.\n";

	}
	else
	{
		cout << "관람 불가입니다.\n";
	}
	cout << "나이는 " << age << " 세 입니다.\n";


	return 0;
}