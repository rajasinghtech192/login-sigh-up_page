#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int a = 0, b = 1, nextnum;
    
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        nextnum = a + b;
        a = b;
        b = nextnum;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    printFibonacci(n); // Call the function

    return 0;
}
