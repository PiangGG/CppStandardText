/*
@ auther piang
测试GCC的常量设定
*/
#include <vector>
#include <iostream>

using namespace std;

int _main_7() 
{
#if defined(_sgi)
	cout << "_sgi" << endl;;
	return 0;
#endif

#if defined(_GNUC_)
	cout << "_CNUC_" << end;
	cout << _CNUC_ << '' << _GNUC_MINOR_<<endl;
#endif
//case 2
#ifdef _STL_NO_DRAND48
	cout << "__STL_NO_DRAND48_ defined" << endl;
#else
	cout << "__STL_NO_DRAND48_ undefined" << endl;
#endif // _STL_NO_DRAND48
//case 3
#ifdef _STL_STATIC_TEMPLATE_MEMBER_BUG
	cout << "_STL_STATIC_TEMPLATE_MEMBER_BUG defined" << endl;
#else
	cout << "_STL_STATIC_TEMPLATE_MEMBER_BUG undefined" << endl;
#endif
	return 0;
}