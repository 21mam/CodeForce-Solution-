#include <iostream>
using namespace std;
int main(){
    int a;
    int count =0;
    cin>>a;
    for(int i=0;i<a;i++){
        string x;
        
        cin>>x;
        if(x[1]=='+'){
            count++;
        }
        else if(x[1]=='-'){
            count--;
        }
    }
    cout<<count;
    











return 0;
}