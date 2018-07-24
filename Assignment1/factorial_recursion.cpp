//Program to find out the factorial using recursion
#include<iostream>
using namespace std;
double factorial(double num); //function prototype declaration
int main()
{
        double num; //declaration of variable
        cout<<"Enter the number to find factorial: "; 
        cin>>num; //inputing the number by user
        cout<<"The factorial is "<<factorial(num); //displaying the factorial 
        return 0;
}
double factorial(double num) //function definition
{
	if(num==0)
		return 1;
	else
        	return num*factorial(num-1); //returning factorial
}

