#include <iostream>
using namespace std;
int main(){
string a;
int x;
cin>>x;
for(int i = 0;i<x;i++){
    cin>>a;
if(a.length()>10){
    cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
}
else{
    cout<<a<<endl;

}


}

    return 0;
}