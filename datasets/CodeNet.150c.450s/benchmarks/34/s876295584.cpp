#include <iostream>
#include<vector>
using namespace std;
vector<int>  memo;
int f(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    if ( memo[n]!= -1 )
        return memo[n];
    return f(n-1)+f(n-2)+f(n-3);
}
 
int main(){
    int n;
    memo.resize(31,-1);
    while(1){
        cin >> n;
        if(n==0)
            break;
        int num=f(n);
        cout <<num/10/365+1<< endl;
    }
    return 0;  
}  