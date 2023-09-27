#include<iostream>
#include<cctype>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char x[1000];
    int sum =0;
    while(1) {
        scanf("%s",x);
        if(strlen(x) == 1 && x[0] == '0') break;
        for(int i = 0; i < strlen(x);i++){
            sum += x[i] - '0';
        }
        cout << sum << endl;
        sum = 0;
        
    }
    
  
   
   
   
    return 0;
}