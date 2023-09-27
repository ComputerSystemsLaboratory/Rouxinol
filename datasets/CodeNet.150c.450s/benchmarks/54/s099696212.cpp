#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
    string n, n2 ;
    cin >> n;
    
    int count = 0;
    
    while(1){
        cin >> n2;
        
        if(n2 == "END_OF_TEXT") break;
        
        for(int i = 0; i < n2.size(); i++){
            if(65 <= n2[i] && n2[i] <= 90){
                n2[i] += 32;
            }
        }
        
        if(n == n2){
            count++;
        }
    }
    
    cout << count << endl;
}

