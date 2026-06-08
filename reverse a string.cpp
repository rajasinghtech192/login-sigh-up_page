#include<iostream>
#include <cstring> 
using namespace std;

    void reverse(char name[], int n) {
        int s=0;
        int e = n-1;

        while(s<e) {
            swap(name[s++], name[e--]);
        }
    }

int main() {

    char name [20];
    
    cout <<"Enter your name" << endl;
    cin >> name;
 
    int len = strlen(name);  
    reverse(name,len);

    cout <<"Your name is" << endl;
    cout << name << endl; 
    return 0;

}