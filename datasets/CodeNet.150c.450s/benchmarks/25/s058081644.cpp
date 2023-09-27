#include<iostream>
#include<stdio.h>
#include<cctype>
using namespace std;
int main(){
    char ch;
    int num;
    int counter[26] = {};
    
    while(scanf("%c", &ch) != EOF){
        
        if(isalpha(ch)){ 
            if(islower(ch)){
                 int num = ch - 'a';
                counter[num] += 1;
            }
            
            else if(isupper(ch)){
                int num = ch - 'A';
                counter[num] += 1;
            }
        }
    }
    
    for(int i = 0; i < 26; i++){
        ch = i + 'a';
        
        cout << ch << " " << ":" << " " << counter[i] << endl;
    }
}
