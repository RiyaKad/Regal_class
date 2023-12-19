#include <iostream>
using namespace std;

int smallest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The smallest element is: " << smallest << endl;
    return smallest;
}

int largest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "The largest element is: " << largest << endl;
    return largest;
}

void ascending(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Elements in ascending order are: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void descending(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Elements in descending order are: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 8;
    int numbers[size];

    cout << "Enter 8 integers:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int choice;
    do
    {
        cout << "\n Menu:\n";
        cout << "1. Find the smallest element\n";
        cout << "2. Find the largest element\n";
        cout << "3. Sort in ascending order\n";
        cout << "4. Sort in descending order\n";
        cout << "5. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            smallest(numbers, size);
            break;
        case 2:
            largest(numbers, size);
            break;
        case 3:
            ascending(numbers, size);
            break;
        case 4:
            descending(numbers, size);
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Enter a valid option (1-5)." << endl;
        }
    } while (choice != 5);

    return 0;
}

