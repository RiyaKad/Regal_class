//.Scan length and width of a rectangle.Define functions to find area and perimeter of rectangle.
//Print both results in main().(use call by value)


/*call by value
In C++, when a function is called by value, it means that the values of the actual parameters (arguments) are passed to the function,
 and the function works with copies of these values. 
Changes made to the parameters inside the function do not affect the original values in the calling function.

In the context of your question about finding the area and perimeter of a rectangle, "call by value" implies that the length and width of 
the rectangle are passed to the functions as parameters, and any modifications made to these parameters inside the functions
 won't affect the original values provided by the user.

*/
#include <iostream>
using namespace std;

int area(int length ,int width)
{
	return length*width ;
}

int perimeter(int length , int width)
{
	return 2*(length + width);
}

int main()
{
	int length ,width;
	cout<<"Enter length of rectangle =";
	cin>>length;
	
	cout<<"Enter width of rectangle =";
	cin>>width;
	
	int cal_area=area( length , width);
	int cal_peri=perimeter( length ,  width);
	
	cout<<"Area of rectangle ="<<cal_area<<endl;
	cout<<"Perimeter of rectangle ="<<cal_peri<<endl;
	
	return 0;

	
}
