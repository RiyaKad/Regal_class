//Scan 6 integers in an array.Define function addition() to find addition of all the integers.
//Print result in main().

#include <iostream>
using namespace std;

int add(int arr[],int size){

int sum =0;
for (int i = 0; i < size; ++i)
{
	sum= sum+arr[i];
}
return sum;
}

int main()
{
	const int size=6;
	int numbers[size];
	
	cout<<"Enter 6 integers = "<<endl;
	 for (int i = 0; i < size; ++i)
	 {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int total = add(numbers,size);
    
    cout<<"The sum of integers is ="<<total<<endl;
    return 0;
}
