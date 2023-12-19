//Scan radius of a circle in main().Define functions to find area and circumference of circle.
//Print both results in main().(use call by value)
#include <iostream>
using namespace std;

double PI = 3.14;

int area(int radius)
{
	return PI*radius*radius;
}

int circum(int radius)
{
	return 2*PI*radius;
}

int main()
{
	int radius;
	cout<<"Enter the radius of circle =";
	cin>>radius;
	
	int cal_area=area( radius);
	int cal_circum=circum(radius);
	
	cout<<"Area of circle ="<<cal_area<<endl;
	cout<<"Circumference of circle ="<<cal_circum<<endl;
	
	return 0;
}
