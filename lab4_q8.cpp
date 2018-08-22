//include the library
#include<iostream>
using namespace std;
//write the main function
int main()
{
	//declare a float array to store values of marks in 5 subjects, and a float variable to store the total marks (initial value zero), and max marks
	float m[5],tot=0,max;
	//input the values of marks in each subject one by one using a loop (declare a counter integer variable,say i, for this purpose), while calculating the total marks at the same time by incrementing the value of the total marks variable by the no. of marks inputted in each iteration, also input max marks obtainable in each subject and find the total maximum marks obtainable
	cout<<"Max marks in each subject? - ";
	cin>>max;
	max*=5;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter marks obtained in subject (out of 100)"<<i+1<<" - ";
		cin>>m[i];
		tot+=m[i];
	}
//calculate and display the average and percentage;also display the total marks
	cout<<"TOTAL MARKS - "<<tot<<endl<<"AVERAGE MARKS IN EACH SUBJECT - "<<tot/5<<endl<<"PERCENTAGE - "<<(tot/max)*100<<" %";
	//la fin
	return 0;
}
