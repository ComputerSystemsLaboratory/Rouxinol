#include <iostream>
#include <cmath>
#include <cctype>
#include<cstdio>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    int ans=0;
    while(true){
        string u;
        cin>>u;
        if(u=="END_OF_TEXT")break;
        transform(u.begin(),u.end(),u.begin(),::toupper);
        if(s==u)ans++;
        
        
    }
    
    cout<<ans<<endl;
    
    return 0;
}

