#include <iostream>
using namespace std;

int main() {
    int arr[6] = {13, 45, 67, 86, 66, 12};
    int value = 86;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == value) {
            cout << "Value found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Value not found in array." << endl;
    }

    return 0;
}
