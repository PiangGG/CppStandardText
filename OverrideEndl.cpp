/*
@author piang
这是一个测试重载输出控制器的测试
结尾符号重载成强加换行
*/

#include <iostream>
using namespace std;

ostream& endl(ostream& strm)
{
	strm.write("强",sizeof("强"));
	//strm.put('|/n');
	strm.put('\n');
	strm.flush();
	return strm;
}
int _main_2()
{
	cout << "中国一定" << endl;
	return 0;
}
/*ostream& endl(ostream& strm)
{
	strm.write("我爱你", sizeof("我爱你"));
	//strm.put('|/n');
	strm.put('\n');
	strm.flush();
	return strm;
}
int _main()
{
	string s;
	cin >> s;
	if (s=="汤圆")
	{
		cout << s << endl;
	}
	return 0;
}*/