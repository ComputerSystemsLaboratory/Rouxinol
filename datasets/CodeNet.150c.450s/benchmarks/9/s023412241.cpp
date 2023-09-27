#include <iostream>
#include <cmath>
#include <cctype>
#include<cstdio>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    
    while(true){
    string s;
    cin>>s;
    if(s=="-")break;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        s=s.substr(j)+s.substr(0,j);
        
        
    }
    cout<<s<<endl;
    }
    
    return 0;
}
