#include<iostream>
#include <cctype>
using namespace std;

int main(){
    string a;
    cin>>a;
    char x = toupper(a[0]);
    
    a[0]=x;
    cout<<a<<endl;
return 0;
}