#include <iostream>
using namespace std;

int main(){
    int a,n,x;
    
    while(1){
        a=0;
        cin >>n >>x;
        if(n==0 && x==0){
            break;
        }
        else{
            for(int h=1; h<=n;h++){
                for(int i=h+1;i<=n;i++){
                    for(int j=i+1;j<=n;j++){
                        if(h+i+j==x){
                        a += 1;
                        }
                    }
                }
            }
            cout << a << endl;
        }
    }return 0;
}
