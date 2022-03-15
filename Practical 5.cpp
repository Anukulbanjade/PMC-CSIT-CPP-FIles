#include<iostream>
using namespace std;
struct distance
{
	int meter;
	int centimeter;
	
	struct distance adddistance(struct distance d1)
	{
		d1.centimeter+=centimeter;
		d1.meter+=meter;
		d1.meter+=d1.centimeter/100;
		d1.centimeter%=100;
		return d1;
	}

    void setdata()
    {
	    cout<<"enter meter:"<<endl;
     	cin>>meter;
	    cout<<"enter centimeter:"<<endl;
	    cin>>centimeter;
    }
    void display()
   {
     	cout<<"meter:"<<meter<<endl;
	    cout<<"centimeter:"<<centimeter<<endl;
    }
};
int main()
{
	struct distance d1,d2,d3;
	d1.setdata();
	d2.setdata();
	d3=d2.adddistance(d1);
	d3.display();
	return 0;
}
