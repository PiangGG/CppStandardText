
/*
@auther piang
Locale(��������)
*/
#include <iostream>
#include <locale>

using namespace std;
int _main_6() 
//int main()
{
	//��C�������ôӱ�׼�����ж�ȡ����
	cin.imbue(locale::classic());
	//�õ¹���������д���������׼���
	cout.imbue(locale("de_DE"));
	//��һ��ѭ���ж�������������
	double Value;
	while (cin>>Value)
	{
		cout << Value << endl;
	}
	return 0;
}