/*
 0005-GCD_and_LCM.cpp
 
 http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0005
 */

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        long int temp_a = a;
        long int temp_b = b;
        while(1){
            long int l = max(temp_a,temp_b);
            long int r = min(temp_a,temp_b);
            
            if(l==r){
                cout<<l<<" "<<a/l * b/l * l <<endl;
                break;
            }else{
                l = l-r;
                temp_a = l;
                temp_b = r;
            }
        }
    }
}