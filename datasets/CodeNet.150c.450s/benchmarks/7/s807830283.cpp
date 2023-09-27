#include<iostream>
using namespace std;
int main(){
    int i,h,a=0,b=0,c=0;
    for(i=0;i<10;i++){
    cin >> h;
    if(a<h){
        c=b;
        b=a;
        a=h;
    }else if(b<h){
        c=b;
        b=h;
    }else if(c<h){
        c=h;
        }
    }
    cout << a << endl << b << endl << c << endl;
return 0;
}