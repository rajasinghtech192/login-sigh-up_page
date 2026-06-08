#include <iostream>
using namespace std;

int main(){
    char str[100];
    int vowels=0;
    cout<<"Enter string:";
    cout<<endl;
    gets(str);
    for(int i=0; i != str[i]; i++){
      if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||
      str[i]=='U' ){
        vowels++;
    }
}
cout<<"Total vowels"<<endl;
cout<< vowels <<endl;
return 0;
}


