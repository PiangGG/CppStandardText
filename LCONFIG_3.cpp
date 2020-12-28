/*
@ather piang
//²âÊÔÔÚclass template ÖĞÓµÓĞstatic date members
*/

#include <iostream>
using namespace std;

template <typename T>
class testClass 
{
	public:
		static int _date;
};

int testClass<int>	::_date = 1;
int testClass<char>	::_date = 2;

int _main_8() 
{
	cout << testClass<int>::_date << endl;
	cout << testClass<char>::_date << endl;

	testClass<int> obji1, obji2;
	testClass<char> objc1, objc2;

	cout << obji1._date << endl;
	cout << objc1._date << endl;
	cout << obji2._date << endl;
	cout << objc2._date << endl;

	obji1._date = 3;
	objc2._date = 4;

	cout << obji1._date << endl;
	cout << objc1._date << endl;
	cout << obji2._date << endl;
	cout << objc2._date << endl;
	return 0;
}
