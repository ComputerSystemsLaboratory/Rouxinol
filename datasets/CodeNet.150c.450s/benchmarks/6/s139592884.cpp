#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int a, b, c;
        sscanf(input.c_str(), "%d %d %d", &a, &b, &c);
        
        if(a < b && b < c){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
    
    return(0);
}

