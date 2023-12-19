//Scan 8 integers from user in an array.Sort them in ascending order.

#include <iostream>
using namespace std;

void ascending(int arr[],int size)
{
	for (int i=0;i<size-1;++i)
	{
		for (int j=0;j<size-1;++j)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
}
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
    ascending(numbers,size);
    
    cout<<"Numbers in ascending order are ="<<endl;
    for (int i = 0; i < size; ++i) 
	{
        cout << numbers[i] << " ";
    }
    
return 0;
}
