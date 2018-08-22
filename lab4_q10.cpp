//include the library
#include<iostream>
#include<cmath>
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
	//declare float variables for storing the values of compound interest earned and final amount and do the necessary calculations
	float amt=p*pow((1+(r/100)),t);
	float ci=amt-p;
	//display the results
	cout<<"COMPOUND INTEREST EARNED - "<<ci<<endl<<"FINAL AMOUNT - "<<amt;
	//la fin
	return 0;
}
