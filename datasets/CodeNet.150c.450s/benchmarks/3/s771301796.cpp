#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


int main(){

    string str;
    int n;
    cin>>str>>n;
    string com;
    for(int i=0;i<n;i++){
        cin>>com;
        if(com=="replace"){
            string str1;
            int a,b;
            cin>>a>>b;
            cin>>str1;
            str.replace(a,b-a+1,str1);
            //if(b!=str.size())str+=str.substr(b+1);
            
        }else if(com=="reverse"){
            int a,b;
            cin>>a>>b;
            reverse(&str[a],&str[b]+1);
        }else if(com=="print"){
            int a,b;
            cin>>a>>b;
            b=b-a+1;
            cout<<str.substr(a,b)<<endl;
        }
        
        //cout<<str<<endl;
        
    }
        
        
    
    

return 0;
}
