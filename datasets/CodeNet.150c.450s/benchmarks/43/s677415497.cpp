#include<iostream>
#include<stdio.h>
#include<math.h>
#include    <iomanip>
using namespace std;
int a,b;
int main(){
    int num;
    while(cin>>num&&num!=0){
        int pa=0,pb=0;
        for (int i=0; i<num; i++) {
            cin>>a>>b;
            if (a==b) {
                pa+=a;pb+=a;
            }else if(a>b){
                pa+=(a+b);
            }else{
                pb+=(a+b);
            }
        }
        cout<<pa<<" "<<pb<<endl;
    }
    return 0;
}