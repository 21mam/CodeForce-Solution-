#include<iostream>
using namespace std;
int main(){
int x,a,b,c;
int count =0;
cin>>x;
for(int i=0;i<x;i++){
    cin>>a>>b>>c;

if(a+b == 2 && b+c==2 && c+a ==2 && a+b+c >= 2){
    count++;}}

cout<<count<<endl;
    return 0;
}