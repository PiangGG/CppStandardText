
/*
@auther piang
Locale(区域设置)
*/
#include <iostream>
#include <locale>

using namespace std;
int _main_6() 
//int main()
{
	//用C区域设置从标准输入中读取数据
	cin.imbue(locale::classic());
	//用德国区域设置写出数据入标准输出
	cout.imbue(locale("de_DE"));
	//在一个循环中读入和输出浮点数
	double Value;
	while (cin>>Value)
	{
		cout << Value << endl;
	}
	return 0;
}