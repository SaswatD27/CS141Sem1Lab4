//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//define float variable to store temperature value in Fahrenheit
	float fahr;
	//input temperature in Fahrenheit
	cout<<"Temperature in Fahrenheit - ";
	cin>>fahr;
	//define float variable to store temperature value in Celsius and do the requisite conversion from Fahrenheit to Celsius
	float cel=(fahr-32)/1.8;
	//display results
	cout<<endl<<"Temperature in Celsius - "<<cel;
	//la fin
	return 0;
}
