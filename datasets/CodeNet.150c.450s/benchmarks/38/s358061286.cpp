#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,s,t,n,i;
    cin >> n;
    for(i=0;i<n;i++){
    cin >> a >> b >> c;
    if(a<b){
        d=b;
        b=a;
        a=d;
    }if(b<c){
        d=c;
        c=b;
        b=d;
    }if(a<b){
        d=b;
        b=a;
        a=d;
    }
    s=a*a;
    t=(b*b)+(c*c);
    if(s==t){
        cout << "YES"<< endl;
        }else {
        cout << "NO" << endl;
        }
    }

 return 0;
}