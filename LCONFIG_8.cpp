/*
@auther piang
//测试template里面是否还有template
*/
#include <iostream>
using namespace std;

class alloc {};

template <class T, class Alloc=alloc>
class vector 
{
public:
	typedef T value_type;
	typedef value_type* iterator;

	template<class T>
	void insert(iterator position, T first, T last) 
	{
		cout << "insert()" << endl;
	}
};
int _main_10() 
{
	int ia[5] = {0,1,2,3,4};
	vector<int> x;
	vector<int>::iterator ite=0;
	x.insert(ite, ia, ia + 5);
	return 0;
}