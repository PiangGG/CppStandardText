#include <iostream>

/*
@author piang
透过"C++I/O Stream 来复制文件"
*/
using namespace std;
int _main_5()
{
	std::cout << std::cin.rdbuf() << std::endl;
	return 0;
}