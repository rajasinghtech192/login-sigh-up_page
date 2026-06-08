
#include<iostream>
using namespace std;

 bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    char name [20];

    cout <<"Enter your name :" ;
    cin >> name;
    cout << end
    cout <<"Your name is:" << name << endl;
    cout << endl;
    cout <<"check Palindrome or not : " << endl;
    cout << endl;

     if (checkPalindrome(name)) {
        cout << "Yes, it's a palindrome." << endl;
    } else {
        cout << "No, it's not a palindrome." << endl;
    }

    return 0;
}

