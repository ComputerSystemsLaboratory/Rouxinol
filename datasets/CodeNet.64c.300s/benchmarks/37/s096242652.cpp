#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >>  n && n){
        int a=0,t1,t2;
        for(int i=1;i<n/2+3;i++){
            t1=2*i+1,t2=i+1;
            while(t1<n){
                t2++;
                t1+=t2;
            }
            if(t1==n)
                a++;
        }
        cout<<a<<endl;
    }
}