#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

int main(){
   
        int count[26] = {};
        char ch;
        
        while( cin >> ch){
            if( isalpha(ch)){
                ch = tolower(ch);
                count[ch - 'a'] += 1;
            }
        }
        
        for(int i=0; i<26; i++){
            printf("%c : %d\n", i+'a', count[i]);
        }
        
    return 0;
    
}
