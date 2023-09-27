#include <iostream>
#include <vector>
using namespace std;


int main() {
    long long N,K;
    long long vec[1 << 18]; 
    cin>> N;
    cin>> K;
    for(int i=1;i<=N;i++){
        cin>> vec[i];
        
    }
    for (int i=K+1;i<=N;i++){
        if(vec[i-K]<vec[i]){
            cout<< "Yes"<<endl;
        }
        else
            cout<< "No"<<endl;
    }
}