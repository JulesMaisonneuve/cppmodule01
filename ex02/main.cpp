#include <iostream>

using namespace std;

int main(void)
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	string &stringREF = brain;
	cout << &brain << endl;
	cout << &stringPTR << endl;
	cout << &stringREF << endl;
	cout << brain << endl;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
	return (0);
}
