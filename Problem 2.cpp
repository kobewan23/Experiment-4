#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int arr[40];
    int size, x, y, z;
    cout << "Enter array size: ";
    cin >> size;
    
    cout << "Enter elements: " << endl;
    for (x = 0; x < size; x++)
    {
        cin >> arr[x];
    }
    
    cout << "List of elements: " << endl;
    
    for (x = 0; x < size; x++)
    {
        cout << arr[x]<< ", ";
    }
    
    for (x = 0; x < size; x++)
    {
        for (y = x + 1; y< size; y++)
        {
            if (arr[x] > arr[y])
            {
                z = arr[x];
                arr[x] = arr[y];
                arr[y] = z;
            }
        }
    }
    
    cout << "\nAfter using selection sort..." << endl;
    cout << "data:" << endl;
    
    for (x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
    
    _getch();
    return 0;
}
