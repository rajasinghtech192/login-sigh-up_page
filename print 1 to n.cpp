 #include <iostream>
using namespace std;
 
 
 void printNumbers(int n) {
    // Base Case
    if (n == 0)
        return;

    // Recursive Call
    printNumbers(n - 1);

    // Print after recursion (to print in increasing order)
    cout << n << " ";
}

int main (){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;

    printNumbers(n);
    cout << endl;

    return 0;
}
