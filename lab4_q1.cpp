//include requisite library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare a float variable to store value in centimetres
	float cm;
	//input magnitude of length in centimetres
	cout<<"Enter length in centimetres - ";
	cin>>cm;
	//output value of that inputted length in metres by dividing it by 100
	cout<<"Length in metres - "<<cm/100<<endl;
	//output value of that inputted length in kilometres by dividing it by 100000
	cout<<"Length in kilometres - "<<cm/100000<<endl;
	//La fin
	return 0;
}
