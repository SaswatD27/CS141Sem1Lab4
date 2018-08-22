//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare two float variables for storing the values of two angles of a triangle
	float a1,a2;
	//input the values of the two angles in degrees
	cout<<"Input the value of"<<endl<<"The first angle in degrees - ";
	cin>>a1;
	cout<<"The second angle in degrees - ";
	cin>>a2;
	//calculate and display the value of the third angle of the triangle
	cout<<"Value of the third angle is - "<<180-(a1+a2)<<" degrees"<<endl;
	//la fin
	return 0;
}
