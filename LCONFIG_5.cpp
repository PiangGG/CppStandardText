/*
@auther piang
//һ�㻯���֮�⣬�ر����ĳЩtemplate���������������
*/
#include <iostream>
using namespace std;

//һ�㻯���
template <class I,class O>
struct testClass
{
	testClass() 
	{
		cout << "I,O" << endl;;
	}
};

//���⻯���
template <class T>
struct testClass<T*,T*>
{
	testClass() 
	{
		cout << "T*,T*" << endl;
	}
};

template <class T>
struct testClass<const T*, T*>
{
	testClass()
	{
		cout << "const T*,T*" << endl;
	}
};

int _main_9() 
{
	testClass<int, char> obj1;
	testClass<int*, int*> obj2;
	testClass<const char*, char*> obj3;

	return 0;
}