#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
	string text;
	string line;
	size_t ret;
	string s1;
	string s2;
	ofstream FileReplace("test.replace");
	
	if (argc != 4)
	{
		cout << "error: invalid number of arguments" << endl;
		return (1);
	}
	fstream file;
	file.open(argv[1], ios::in);
	while (getline(file, line))
	{
		text.append(line);
		if (!file.eof())
			text.push_back('\n');
	}
	file.close();
	s1 = argv[2];
	s2 = argv[3];
	ret = 0;
	while ((ret = text.find(s1, ret)) != string::npos)
	{
		text.erase(ret, s1.length());
		text.insert(ret, s2);
		ret += s2.length();
	}
	cout << text;
	FileReplace << text;
	FileReplace.close();
	return (0);
}
