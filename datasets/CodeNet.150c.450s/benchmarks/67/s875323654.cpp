#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    while(1){
        int N;
        cin>> N;
        if(N==0) break;

        int ans=0;
        for(int l=2; l<=50; l++){
            for(int i=1; i<N; i++){
                int s=(2*i+l-1)*l/2;
                ans+=s==N;
            }
        }

        cout<< ans<< endl;

    }

    return 0;
}