//Program to find out the simple interest using function
#include<iostream>
using namespace std;
float SimpleInterest(float p,float r,float t); //function prototype declaration
int main()
{
        float principal,rate,time; //declaration of variable
        cout<<"Enter the principal amount,rate and time: "; 
        cin>>principal>>rate>>time; //inputing the principal amount,rate and time by user
        cout<<"The Simple Interest is "<<SimpleInterest(principal,rate,time); //displaying the Simple interest 
        return 0;
}
float SimpleInterest(float p,float r,float t) //function definition
{
        return (p*r*t)/100; //returning simple interest
}

