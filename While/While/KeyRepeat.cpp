#include <iostream>
#include <string>
using namespace std;\
/*
  Ű �ݺ� ����
  'y or Y'Ű�� ������ "��� �ݺ�"
  'n or N'Ű�� ������ "�ݺ� �ߴ�"
  �� ���� Ű�� "�߸��� �Է�"


  �� ���ڿ� �Լ� - compare()
*/

int main()
{
	string key; //�Է� Ű ����
	while (1)
	{
		cout << "��� �ݺ��ұ��(y/n)?";
		cin >> key;

		if (key.compare("y") == 0 ||key.compare("Y")==0) //"����� -->string �̱� ������
		{
			cout << "��� �ݺ�!\n";
		}
		else if (key.compare("n") == 0|| key.compare("N")==0)
		{
			cout << "�ݺ� �ߴ�\n";
			break; //�ݺ��� Ż��
		}
		else
		{  
			cout << "�߸��� �Է�";
			break;
		}
	}


	return 0;
}