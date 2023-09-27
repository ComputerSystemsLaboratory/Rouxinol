#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char num[1000] = "1";
    
    while(1){
        int S = 0;
        
        scanf("%s", num);
        
        if(num[0] == '0')break;
        
        for(int i = 0; i < 1001; i++){
            if(num[i] == '\0')break;
            
            S += (num[i] - '0');
        }
        
        cout << S << endl;
        
    }
}
