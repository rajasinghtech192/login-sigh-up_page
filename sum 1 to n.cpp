#include <iostream>
using namespace std;

// Function to calculate sum using recursion
int sumOfNaturalNumbers(int n) {
    // Base Case
    if (n == 1)
        return 1;

    // Recursive Case
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = sumOfNaturalNumbers(n);
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
