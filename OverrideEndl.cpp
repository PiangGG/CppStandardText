/*
@author piang
����һ��������������������Ĳ���
��β�������س�ǿ�ӻ���
*/

#include <iostream>
using namespace std;

ostream& endl(ostream& strm)
{
	strm.write("ǿ",sizeof("ǿ"));
	//strm.put('|/n');
	strm.put('\n');
	strm.flush();
	return strm;
}
int _main_2()
{
	cout << "�й�һ��" << endl;
	return 0;
}
/*ostream& endl(ostream& strm)
{
	strm.write("�Ұ���", sizeof("�Ұ���"));
	//strm.put('|/n');
	strm.put('\n');
	strm.flush();
	return strm;
}
int _main()
{
	string s;
	cin >> s;
	if (s=="��Բ")
	{
		cout << s << endl;
	}
	return 0;
}*/