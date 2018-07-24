//Program to find out the ASCII value a-z and 0-9 using recursion
#include<iostream>
using namespace std;
int ascii(int val); //function prototype declaration
int main()
{
        int val=48; //declaration of variable 
        cout<<"The ASCII value is :-\n ";
	ascii(val); //displaying the ascii value 
        return 0;
}
int ascii(int val) //function definition
{
	while(val!=123)
	{
		if((val>=48&&val<=57)||(val>=97&&val<=122))
		{	
	        	cout<<char(val)<<"\n";
			val+=1;
			ascii(val);
		}
		else
			val+=1;
			ascii(val);
	}
	
/*	while(val!=123)
	{
		cout<<char(val)<<"\n";
		val+=1;
		ascii(val);
	}*/
}

