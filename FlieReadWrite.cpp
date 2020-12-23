/*
@author piang
这是一个测试文件输入输出的文件
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;
void WirteCharsetToFile(const string& fileName);
void OutputFile(const string& fileName);
int _main_4()
{
	string fileName;
	cin >> fileName;
	WirteCharsetToFile(fileName);
	OutputFile(fileName);
	return 0;
}

void WirteCharsetToFile(const string& fileName)
{
	ofstream file(fileName.c_str());

	if (!file)
	{
		cerr << "Can't open output file\"" << fileName<<"\""<<endl;
	}

	for (int i = 32; i < 256; i++) 
	{
		file << "Value" << setw(3) << i << "" << "char:" << static_cast<char>(i) << endl;
	}
	file << "中国一定强" << endl;
}

void OutputFile(const string& fileName)
{
	ifstream file(fileName.c_str());
	if (!file)
	{
		cerr << "Can't open  input file\"" << fileName << "\"" << endl;
		exit(EXIT_FAILURE)	;
	}
	char c;
	while (file.get(c)) 
	{
		cout.put(c);
	}
}
