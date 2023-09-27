#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        if(s==t){
            a++;
            b++;
        }else if(s>t){
            a+=3;
        }else{
            b+=3;
        }
    }
    cout<<a<<" "<<b<<endl;
    
}

