#include<iostream>
using namespace std;
int main(){
    int d,a,b,s,sum;
    while(cin>>d){
        sum=0;
        a=600/d;
        for(int i=0;i<a;i++){
            b=d*d*i*i;
            s=b*d;
            sum+=s;
        }
        cout << sum << endl;
    }
    return 0;
}