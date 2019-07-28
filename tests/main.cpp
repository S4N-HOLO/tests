
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string name = " Alex ";
	ofstream output("alex.txt");
	output << "yo " << name;

	return (0);
}