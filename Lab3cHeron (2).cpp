//Given the sides, this program will find the area of a triangle

#include<iostream>
#include<math.h>
using namespace std;


double triangleArea(double a, double b, double c);

int main()
{
	double triangleArea(double a, double b, double c);
}


double triangleArea(double a, double b, double c)
{
	
	
	cout << "Enter the sides of the triangle: " << endl;
	cin >> a, b, c;
	double s, area;
	s = (a+b+c) / 2.0;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	cout << "The area of the triangle is: " << area << endl << endl;
	
}

 