#include <iostream>
using namespace std;
#define PI 3.1415
inline float Area(float radius)
{
	return PI*radius*radius;
}

int main()
{
	float radius,Area;
		cout<<"Enter the Radius: ";
		cin>>radius;
	Area=PI*radius*radius;
	cout<<"The Area of Circle is:"<<Area;
	
}
