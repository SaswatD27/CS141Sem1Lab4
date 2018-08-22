//include the libraries
#include<iostream>
#include<cmath>
using namespace std;
//write the main function
int main()
{
	//declare a float variable to store the value of the length of the side of the equilateral triangle
	float a;
	//input the value of the side length of the equilateral triangle
	cout<<"Enter length of side of the equilateral triangle - ";
	cin>>a;
	//declare a float variable to store the value of the area of the triangle and do the reqd calc'
	float area=(sqrt(3)/4)*a*a;
	//display the result
	cout<<"Area of the equilateral triangle is "<<area<<" sq. units.";
	//la fin
	return 0;
}
