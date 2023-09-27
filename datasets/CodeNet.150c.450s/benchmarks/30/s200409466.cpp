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
    int i,minj,j,cnt;
    cnt =0;
    cin >> n;
    for ( int i = 0; i < n; i++ )cin >> A[i];
    
    for ( i = 0; i < n; i++ ){
        minj = i;
        for ( j = i; j <= n-1; j++ ){
            if ( A[j] < A[minj] ){
                minj = j;                
            }             
        }
        swap( A[i],A[minj] );
        if ( i != minj ){ 
            cnt = cnt+1;     
        }
    }
     trace();    
     cout << cnt << endl;
}