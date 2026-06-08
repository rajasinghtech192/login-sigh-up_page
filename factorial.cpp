#include <iostream>
using namespace std;

// Function to calculate factorial  using recursion

int factorial(int n) {
    // Base Case
    if (n == 0)
        return 1;

    // Recursive Case
    int smallerproblem  = factorial (n-1);
    int biggerproblem  = n * smallerproblem ;

    return n*factorial (n-1);

}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = factorial(n);
    cout << "factorial of number : " << ans <<  endl;

    return 0;
}

