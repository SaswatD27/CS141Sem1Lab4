//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{	
	//declare two float variables for storing values of base length and corresponding height of a triangle
	float b,h;
	//input the values of base length and height
	cout<<"For a triangle, input the"<<endl<<"Base Length - ";
	cin>>b;
	cout<<"Height - ";
	cin>>h;
	//declare a variable to store the value of the area of the triangle and do the reqd calculation
	float area=0.5*b*h;
	//display the result
	cout<<"Area of the triangle is "<<area<<" square units.";
	//la fin
	return 0;
}
