/*
@auther piang
//一般化设计之外，特别针对某些template参数做的特殊设计
*/
#include <iostream>
using namespace std;

//一般化设计
template <class I,class O>
struct testClass
{
	testClass() 
	{
		cout << "I,O" << endl;;
	}
};

//特殊化设计
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