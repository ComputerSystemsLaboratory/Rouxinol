#include<iostream>
using namespace std;
int n,A[100];

void trace(){
    for ( int i = 0; i < n; i++ ){
        if ( i ) cout << " ";
        cout << A[i];
    }
     cout << endl;
}
int main(){
    int i,j,flag,cnt;
    cnt =0;
    cin >> n;
    for ( int i = 0; i < n; i++ ) cin >> A[i];
    
    flag = 1;
    while ( flag ){
        flag = 0;
        for ( j = n-1; j >= 1; j-- ){
            if ( A[j] < A[j-1] ){
              swap ( A[j],A[j-1] ); 
              cnt = cnt+1;
              flag = 1;
            }
        }
    }
     trace();
     cout << cnt << endl;
}

                