//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare float variables to store the principal amount, time duration (in years) and rate of interest (per annum)
	float p,t,r;
	//input the values of the principal amount, time duration (in years), rate of interest (per annum)
	cout<<"PRINCIPAL AMOUNT - ";
	cin>>p;
	cout<<"TIME DURATION (IN YEARS) - ";
	cin>>t;
	cout<<"RATE OF INTEREST (PER ANNUM) - ";
	cin>>r;
	//declare float variables for storing the values of simple interest earned and final amount and do the necessary calculations
	float si=(p*t*r)/100;
	float amt=p+si;
	//display the results
	cout<<"SIMPLE INTEREST EARNED - "<<si<<endl<<"FINAL AMOUNT - "<<amt;
	//la fin
	return 0;
}

