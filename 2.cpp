//Scan 8 integers from user.Find the smallest value.(using pointer)


#include <iostream>

using namespace std;

int main()
 {
    const int size = 8;
    int numbers[size];

   
    cout << "Enter 8 integers =" << endl;
    for (int i = 0; i < size; ++i)
	 {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> numbers[i];
    }

   
    int* ptr = numbers;  
    int smallest = *ptr; 

    for (int i = 1; i < size; ++i) 
	{
        if (*(ptr + i) < smallest)
		 {
            smallest = *(ptr + i);
        }
    }

    
    cout << "The smallest element in the array is =  " << smallest << endl;

    return 0;
}

/*ptr is a pointer that is initialized to point to the beginning of the array numbers.
 This is achieved by setting it equal to the array name, which decays to a pointer to its first element.
smallest is initialized with the value pointed to by ptr, which is the first element of the array. 
This is done to assume that the first element is the smallest initially.
The loop starts from i = 1 because we've already assumed the first element as the smallest.
*(ptr + i) is used to access the value at the (ptr + i)th location, i.e., the (i+1)-th element of the array.
The if statement checks if the value at the current position is smaller than the current value of smallest. 
If true, it updates the smallest with the new value.
The loop continues until all elements in the array are checked.*/


