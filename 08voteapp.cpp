#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"\n Welcome to Vote Elligiblity checker";
	cout<<"\n Enter your age: ";
	cin>>age;
	if (age >= 16)
	cout<<"You are eligible to vote";
	else
	cout<<"You are inelligible to vote";
	
	return 0;
}
