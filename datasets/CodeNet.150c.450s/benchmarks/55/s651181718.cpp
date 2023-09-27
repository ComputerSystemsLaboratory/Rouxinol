
#include <iostream>
#include <string>
#include <sstream>
#include<algorithm>
using namespace std;

int main(){

    while(true){
        
        string n;
        cin>>n;
        
        if(n[0]=='0'&&n.size()==1)break;
        
        int ans=0;
        reverse(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            
            int num=n[i]-'0';
            
            ans=ans+num;
        }
        
        cout<<ans<<endl;
    }
	
	return 0;
	
}
