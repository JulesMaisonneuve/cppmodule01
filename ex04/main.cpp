#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string text;
	std::string line;
	size_t ret;
	std::string s1;
	std::string s2;
	std::ofstream FileReplace("test.replace");
	if (! FileReplace.is_open())
	{
		std::cout << "Error: couldn't open file" << std::endl;
		return (1);
	}
	if (argc != 4)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}
	std::fstream file;
	file.open(argv[1], std::ios::in);
	if (! file.is_open())
	{
		std::cout << "Error: couldn't open file" << std::endl;
		return (1);
	}
	while (getline(file, line))
	{
		text.append(line);
		if (!file.eof())
			text.push_back('\n');
	}
	file.close();
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: invalid arguments (empty string)" << std::endl;
		return (1);
	}
	ret = 0;
	while ((ret = text.find(s1, ret)) != std::string::npos)
	{
		text.erase(ret, s1.length());
		text.insert(ret, s2);
		ret += s2.length();
	}
	std::cout << text;
	FileReplace << text;
	FileReplace.close();
	return (0);
}
