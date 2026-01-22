

#include <iostream>
#include "../Project1/math.h"
using namespace std;

int main()
{
	int x;
	int y;

	cin >> x >> y;

	cout << addition(x, y) << "\n";
	cout << subtraction(x, y) << "\n";
	cout << multiply(x, y) << "\n";
	cout << divide(x, y);
}