#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

bool truck(long int M,int n,int k,int bag[]);

int main(){
    int n,k,bag[100000+10];
    cin >> n >> k;
    for(int j=0;j<n;j++){
        cin >> bag[j];
    }
    long int l=0;
    long int h=pow(2,31);
    bool test;
    while(l+1<h){
        long int m=(l+h)/2;
        test=truck(m,n,k,bag);
        if(test) h=m;
        else l=m;
    }
//    cout << h << endl;
    printf("%ld\n",h);

}

bool truck(long int M,int n,int k,int bag[]){
    int wgt=0,num=1;
    for(int i=0;i<n;i++){
        if(wgt+bag[i]<=M) wgt+=bag[i];
        else{
            num++;
            if(bag[i]<=M) wgt=bag[i];
            else{
                num=100000+10;
                break;
            }
        }
    }
//    if(num<=k) cout << 1 << endl;
//    else cout << 0 << endl;
    return num<=k;
}