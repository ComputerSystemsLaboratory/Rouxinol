#include <iostream>
#include <string>
using namespace std;
int main(){

    char ch;
    int alp[26];
    char all[]="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++){
        alp[i]=0;
    }
    
    while(cin>>ch){
    
    
        
        if(ch>='a'&&ch<='z'){
        int j=ch-'a';
        alp[j]++;
        }else if(ch>='A'&&ch<='Z'){
            int j=ch-'A';
            alp[j]++;
        }
    }
    for(int i=0;i<26;i++){
        cout<<all[i]<<" : "<<alp[i]<<endl;
    }
    

return 0;
}
