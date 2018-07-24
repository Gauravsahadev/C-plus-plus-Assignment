//Program to find out the area of a circle using function
#include<iostream>
#define PI 3.14 //Macro-defination
using namespace std;
float Area(float rad); //function prototype declaration
int main()
{
	float rad; //declaration of variable
	cout<<"Enter the radius of circle: "; 
	cin>>rad; //inputing the radius by user
	cout<<"The area of radius "<<rad<<" of circle is "<<Area(rad); //displaying the area
	return 0;
}
float Area(float rad) //function definition
{
	return PI*rad*rad; //returning area of circle
}
