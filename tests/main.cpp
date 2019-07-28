
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string name = " Alex ";
	ofstream output("alex.txt");
	output << "yo " << name;
	int a = 0;
	ofstream output("a.txt");
	output << a;

	return (0);
}