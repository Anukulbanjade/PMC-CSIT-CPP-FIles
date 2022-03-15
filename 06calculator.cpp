#include<iostream>
using namespace std;
int main()
{
	int sum,diff,mul;
	float div;
	
	int a,b;
	cout<<"Enter the first number:"<<endl;
	cin>>a;
	
     cout<<"Enter the second number:\n"<<endl;
	cin>>b;
	
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	
	cout<<"\n Addition of two number is : "<<sum;
	cout<<"\n subtraction of two number is :"<<diff;
	cout<<"\n Multiplication of two number is: "<<mul;
	cout<<"\n division of two number is: "<<div; 
	
	return 0;
}
