#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, element, pos;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display original array
    cout << "\nOriginal Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Input new element and position
    cout << "\nEnter element to insert: ";
    cin >> element;

    cout << "Enter position: ";
    cin >> pos;

    // Shift elements to the right
    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = element;
    n++;

    // Display updated array
    cout << "\nUpdated Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

