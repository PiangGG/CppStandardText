/*
@author piang
这是一个自定义的控制器
忽略一行
*/
#include <iostream>
#include <limits>
using namespace std;

template <class charT, class traits>
inline 
std::basic_istream<charT, traits>& 
IgnoreLine(std::basic_istream<charT, traits>& strm) 
{
	strm.ignore(std::numeric_limits<int>::max(),strm.widen('\n'));
	return	strm;
}

int _main_3()
{
	float f1,f2;
	f1 = 1; f2 = 2;
	cout << f1 << endl;;
	cin>> IgnoreLine >> IgnoreLine>>IgnoreLine;
	cout <<f2;
	return 0;
}