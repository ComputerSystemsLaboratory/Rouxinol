#include <iostream>
using namespace std;
int main(){
    int i=0;
    int n,x;
    cin>>n>>x;
    while(!(n==0 && x==0)){
        i=0;
        for(int j=2;j<n;j++){
            for(int k=1;k<j;k++){
                for(int l=0;l<k;l++){
                    if(j+k+l+3==x){
                        i++;
                    }
                }
            }
        }
        cout<<i<<endl;
        cin>>n>>x;
    }
}