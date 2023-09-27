#include <iostream>
using namespace std;

int integar(int n);

int main(){
    int n;
    while(cin >> n){
        cout << integar(n) << endl;
    }
}

int integar(int n){
    int sum=0;
    int i,j,k,l;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                for(l=0;l<10;l++){
                    if(i+j+k+l==n)
                        sum++;
                }
            }
        }
    }
    return sum;
}