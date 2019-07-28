
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string name = " Alex ";
	ofstream output("alex.txt");
	output << "yo " << name;
	int a = 234340;
	ofstream xoutput("a.txt");
	xoutput << a;
	int b = a;

	return (0);
}