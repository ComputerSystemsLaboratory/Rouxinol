#include<iostream>
using namespace std;
int main(){
    int n[101];
    int i;
    for( i = 0;i < 101;i++){
        n[i] = 0;
        
    }
    for( i = 1;i != 0;i){
        i = 0;
        cin  >> i;
        n[i]++;
    }
    int max = 1;
    for( i = 2;i < 101;i++){
       
        if(n[max] <= n[i]){
            max = i;
            
        }
    }
    for( i = 1;i < 101;i++){
        if(n[i] == n[max]){
            cout << i <<endl;
        }
    }
    return 0;

}
