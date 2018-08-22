//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//define float variable to store temperature value in Celsius
	float cel;
	//input temperature in Celsius
	cout<<"Temperature in Celsius - ";
	cin>>cel;
	//define float variable to store temperature value in Fahrenheit and do the requisite conversion from Celsius to Fahrenheit
	float fahr=(cel*1.8)+32;
	//display results
	cout<<endl<<"Temperature in Fahrenheit - "<<fahr;
	//la fin
	return 0;
}
