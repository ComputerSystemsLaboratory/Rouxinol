#include<iostream>
#include<stdio.h>
#include<math.h>
#include    <iomanip>
using namespace std;
int main(){
    long long int num;
    while(cin>>num&&num!=0){
        
        char a[100000][2];
        for (long long int i=0; i<num; i++) {
            cin>>a[i][0]>>a[i][1];
            
        }
        long long  num2;
        cin>>num2;
        char k;
        for (long long int i=0; i<num2; i++){
            cin>>k;
            for (long int ii=0; ii<num; ii++) {
                if (a[ii][0]==k) {
                    k=a[ii][1];
                    ii=num;
                }
            }
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}