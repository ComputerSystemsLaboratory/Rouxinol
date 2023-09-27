#include <iostream>
#include <cmath>
#include <cctype>
#include<cstdio>
//#include <string>
using namespace std;
int main(){
   
    
    int alpha[26];
    for(int i=0;i<26;i++){
        alpha[i]=0;
    }
    char c;
    while(cin>>c){
        if(isalpha(c)){
            
            if(isupper(c)){
            alpha[c-'A']++;
            }else alpha[c-'a']++;
            
        }
    }
    
    for(int i=0;i<26;i++){
        
        cout<<char('a'+i)<<" : "<<alpha[i]<<endl;
    }
    
    
    
    
    return 0;
}

