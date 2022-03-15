#include<iostream>
using namespace std;
int* getnumber(int n)
{
	int *p= new int[n];
	cout<<"enter "<<n<<" integers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	return p;
}

int sum(int *p, int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+= *(p+i);
	}
	return s;
}

int main()
{
	int n;
	cout<<"enter the no. of elements to be added:";
	cin>>n;
	int *p=getnumber(n);
	int s= sum(p,n);
	cout<<"sum of elements is:"<<s;
	return 0;
}
