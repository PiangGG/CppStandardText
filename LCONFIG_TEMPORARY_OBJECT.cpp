/*
@auther piang
��ʱ����Ĳ���������
�º���
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
class Print_
{
public:
	void operator()(const T& elem)
	{
		cout << elem << endl;
	}
};

int _main_11()
{
	int ia[6] = { 0,1,2,3,4,5 };
	vector<int> iv{ ia,ia + 6 };
	for_each(iv.begin(),iv.end(),Print_<int>());
	return 0;
}