#include <iostream>
using namespace std;

// Recursive function to reverse a sorted array
void reverseArray(int arr[], int start, int end) {
    //base case
    if (start >= end)
        return;

    // Swap elements at start and end //ak  ko hmne reverse kr diya
   swap(arr[start], arr[end]);

    // Recursive call// baki ye krega
    reverseArray(arr, start + 1, end - 1);
}
int main() {
    int arr[] = {1,2,3,4,5};
    // find num of element
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
