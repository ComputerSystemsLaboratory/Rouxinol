#include<iostream>
#include<stdio.h>
using namespace std;
int main () {
    
    int c[26] = {0};
    
    char ch;
    
    while (cin >> ch) {
        
        
        
        if (isalpha(ch)) {
            
            if (isupper(ch)) {
                
                char ch1 = tolower(ch);
                
                int num = ch1 - 'a';
                
                c[num] += 1;
                
            } else {
                
                int num = ch - 'a';
            
                c[num] += 1;
                
            }
            
        }
        
    }
    
    for (int i = 0; i < 26; i ++) {
        
        char alpha = i + 'a';
        
        cout << alpha << ' ' << ':' << ' ' <<  c[i] << endl;
        
    }
    
    return 0;
    
}

