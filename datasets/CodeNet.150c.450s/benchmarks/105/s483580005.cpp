#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>

using namespace std;



void reduce(int arr[64][64], int lead[64], int* d) {
    for(int i = 0; i < *d-1; i++) {
        if(arr[*d-1][lead[i]]==1) {
            for(int k = lead[i]; k < 64; k++) {
                arr[*d-1][k] = arr[*d-1][k]^arr[i][k];
            }
        }
    }
    int t = 0;
    for(int i = 0; i < 64; i++) {
        if(arr[*d-1][i]!=0) {
            t = 1;
            lead[*d-1] = i;
            break;
        }
    }
    if(t==0) {
        *d = *d-1;
        return;
    }

    for(int i = *d-2; i >=0; i--) {
        if(lead[i+1]<lead[i]) {
            for(int j = 0; j < 64; j++) {
                t = arr[i][j];
                arr[i][j] = arr[i+1][j];
                arr[i+1][j] = t;
            }
            t = lead[i];
            lead[i] = lead[i+1];
            lead[i+1] = t;
        } else return;
    }
    return;
}


int solve() {
    int n;
    cin>>n;
    long *a = new long[n];
    for(int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    string s;
    cin>>s;

    int arr[64][64];
    int lead[64];
    int d = 0;
    int t;
    long temp;
    for(int i = s.length()-1; i >=0; i--) {
        t = d;
        temp = a[i];
        for(int j = 63; j >=0; j--) {
            arr[d][j] = temp%2;
            temp/=2;
        }
        d++;
        reduce(arr,lead,&d);

        if(s[i]=='1'&&t!=d) return 1;
    }
    return 0;


}


int main(void){

    

    long t;
    cin >>t;
    string ans;

    for(int i = 0 ; i < t; i++) {
        cout<<solve()<<"\n";
    }






    return 0;
}