#include<iostream>
using namespace std;
class Time
{
	int hrs,min,sec;
	public:
		set(int x,int y, int z)
		{
			hrs=x;
			min=y;
			sec=z;
		}
		void display()
		{
			cout<<"The hour is:"<<hrs<<endl;
			cout<<"The minute is:"<<min<<endl;
			cout<<"The secound is:"<<sec<<endl;	
		}
		friend Time Add(Time a,Time b);
};
Time Add(Time a,Time b)
{
	int hour=a.hrs+b.hrs;
	int min=a.min+b.min;
	int sec=a.sec+b.sec;
	int carrymin=0;
	int carrysec=0;
	if(sec>=60)
	{
		carrysec=sec/60;
		sec%=60;
	}
	min+=carrysec;
	if(min>=60)
	{
		carrymin=min/60;
		min%=60;
	}
	hour+=carrymin;
	a.hrs=hour;a.min=min;a.sec=sec;
	return a;
}
int main()
{
	Time x,y,z;
	int a,b,c,d,e,f;
	cout<<" Enter the values for hour ,min,sec:";
	cin>>a>>b>>c;
	cout<<" Enter the  another values for hour ,min,sec:";
	cin>>d>>e>>f;
	x.set(a,b,c);
	y.set(d,e,f);
	z=Add(x,y);
	z.display();
	return 0;
	
}
