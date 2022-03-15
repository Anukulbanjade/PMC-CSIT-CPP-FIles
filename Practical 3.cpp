#include<iostream>
using namespace std;
void sort(int arr[], int size)
{
	int i,j,key;
	for(i=0;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<endl;
}
void sort(char arr[], int size)
{
	int i,j,key;
	for(i=0;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<endl;
}
void sort(float arr[], int size)
{
	int i,j,key;
	for(i=0;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<endl;
}
int main()
{
	int s;
	cout<<"enter the size of string:";
	cin>>s;
	char arr[s];
	cout<<"enter values:";
	for(int i=0;i<s;i++)
	   cin>>arr[i];
	sort(arr,s);
	cout<<"sorted array:"<<endl;
	for(int i=0;i<s;i++)
	   cout<<arr[i]<<" ,";
	return 0;
	
}
