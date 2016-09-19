//Given the sides, this program will find the area of a triangle

#include<iostream>
#include<math.h>
using namespace std;


double triangleArea(double a, double b, double c);

int main()
{

	double a, b, c;
	cout << "Enter the sides of the triangle: " << endl;
	//I think my cpu didn't like these on the same line. can't say for sure though
	cin >> a;
	cin >> b;
	cin >> c;
	//probably add some more text here to make things nice
	cout << triangleArea(a, b, c); // so we only need the return type when we are declaring it
	// when we go to use a func we just fire it off
	
}



// all this function knows how to do is triangleArea
// there should not be anything in this func that isn't about getting triangle area
// that's why all the input was moved to main
double triangleArea(double a, double b, double c)
{
	
	double s, area;
	s = (a+b+c) / 2.0;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	return(area);
	//cout << "The area of the triangle is: " << area << endl << endl;
	
}

 