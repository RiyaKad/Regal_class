//1.Scan 10 integers from user in an array of integers.
//Find the largest element.(using [])

#include <iostream>

using namespace std;

int main()
 {
    const int size = 10;
    int numbers[size];

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < size; ++i)
	 {
        cout << "Enter integer " << i + 1 << "= ";
        cin >> numbers[i];
    }

    int large = numbers[0];  
    for (int i = 1; i < size; ++i) 
	{
        if (numbers[i] > large)
		 {
            large = numbers[i];
        }
    }

   
    cout << "The largest element in the array is: " << large << endl;

    return 0;
}

