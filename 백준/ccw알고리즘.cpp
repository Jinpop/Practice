#include <iostream>
using namespace std;

int ccw(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int a = x1 * y2 + x2 * y3 + x3 * y1;
	int b = y1 * x2 + y2 * x3 + y3 * x1;
	return a - b;
}

int main()
{
	cout << ccw(10, 15, 8 , 5, 5, 10);

	return 0;
}