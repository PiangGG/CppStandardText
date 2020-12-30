/*
@auther piang 
只要给与不同的迭代器，find便能够对不同的容器进行查找操作
*/

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
using namespace std;

void func() 
{
	auto_ptr<string> str1(new string("中国一定强!"));
	cout << *str1 << endl;
	cout << str1->size() << endl;
	cout << str1->data() << endl;
	//cout << str1 << endl;
}
int main_13() 
{
	const int arraysize = 7;
	int ia[arraysize] = { 0,1,2,3,4,5,6 };
	vector<int>		ivector(ia, ia + arraysize);
	list<int>		ilist(ia, ia + arraysize);
	deque<int>		ideque(ia, ia + arraysize);
	
	vector<int>::iterator it1 = find(ivector.begin(),ivector.end(),4);
	if (it1==ivector.end())
	{
		cout << "4 not found" << endl;
	}
	else
	{
		cout << "4  found" << endl;
	}

	list<int>::iterator it2 = find(ilist.begin(), ilist.end(), 6);
	if (it2==ilist.end())
	{
		cout << "6 not found" << endl;
	}
	else 
	{
		cout << "6 found" << endl;
	}

	deque<int>::iterator it3 = find(ideque.begin(), ideque.end(), 9);
	if (it3 == ideque.end())
	{
		cout << "9 not found" << endl;
	}
	else
	{
		cout <<" 9 found" << endl;
	}
	func();
	return 0;
}