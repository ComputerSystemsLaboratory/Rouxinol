#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >>a >>b;
    while(a!=0||b!=0){
        int i,j,k;
        int m=0;
        for(i=1;i<=a;i++){
            for(j=i+1;j<=a;j++){
        for(k=j+1;k<=a;k++){
            if(i+j+k==b) m++;
        }
            }
        }
        
    cout << m << endl;
    
    cin >>a >>b;
    }
    return 0;
}
