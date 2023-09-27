#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    int a,b,c;
    
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++){
        scanf(" %d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c||c*c==b*b+a*a||b*b==a*a+c*c){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}