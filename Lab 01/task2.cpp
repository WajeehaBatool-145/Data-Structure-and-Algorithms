
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos;

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

    // Input position to delete
    cout << "\nEnter position to delete: ";
    cin >> pos;

    // Shift elements to the left
    for(int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    // Display updated array
    cout << "\nUpdated Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

