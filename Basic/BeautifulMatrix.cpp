#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,d;
     a=5;
    b =5;
int x[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        cin>>x[i][j];
    }
}
for(int i=0; i<a; i++){
    for(int j=0; j<a; j++){
        if(x[i][j]==1){
            c=i;
            d=j;
            break;
        }
    }
}
c=abs(2-c);
d=abs(2-d);
int sum = c+d;
cout<<sum<<endl;
return 0;
}