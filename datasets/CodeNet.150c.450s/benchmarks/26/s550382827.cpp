#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void){
    string input;
    
    while(getline(cin, input), !cin.eof()){
        int a, b;
        sscanf(input.c_str(), "%d %d", &a, &b);
        
        if(a < b){
            printf("a < b\n");
        }
        else if(a > b){
            printf("a > b\n");
        }
        else{
            printf("a == b\n");
        }
        
    }
    
    return(0);
}

