#include <iostream>
using namespace std;

int dp(int n){
    int A[31];
    for(int i=0; i<31; i++){
    if(i==0)    A[0] = 1;
    else if(i==1) A[1]= 1;
    else if(i==2) A[2]= 2;
    else A[i]=A[i-1]+A[i-2]+A[i-3];
    }
    return A[n];
}

int main(void){
    int n, p;
    while(cin >> n){
        if(n==0)    break;
        p = dp(n);
        if(p%10!=0){
            p = p/10+1;
            if(p>365)   p = p/365+1;
            else        p = 1;
        }
        else{
            p = p/10;
            if(p>365)   p = p/365+1;
            else        p = 1;
        }
        cout << p << endl;
    }
    return 0;
}
