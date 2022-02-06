#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
cout << "Hello there. What is your name? ";
string name;
cin >> name;
cout << "Hello " << name << "! Nice to meet you!" << endl;

return 0;
}
