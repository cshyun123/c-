#include <iostream>
using namespace std;

int main()
{
	//���̰� 15�� �̻��̸� "������" ����

	//int age = 16
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;


	if (age >= 15)//true -1
	{
		cout << "�������Դϴ�" << endl;
	}

	cout << "���̴� " << age << " �� �Դϴ�.\n";

	//���̰� 15�� �̻��̸� ������ �׷��� ������ �����Ұ�
	//if-else��
	if (age >= 15)
	{
		cout << "�������Դϴ�.\n";

	}
	else
	{
		cout << "���� �Ұ��Դϴ�.\n";
	}
	cout << "���̴� " << age << " �� �Դϴ�.\n";


	return 0;
}