#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num[101]={};
    int i,nmax=0;
    while(cin>>i){
        num[i]++;
        nmax=max(nmax, num[i]);
    }
    for(int i=1; i<=100; i++){
        if(num[i]==nmax) cout << i << endl;
    }
    return 0;
}