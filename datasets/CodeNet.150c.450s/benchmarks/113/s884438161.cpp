#include<iostream>
using namespace std;
int main() {
    int x[10000];
    int i =0;
    while(1){
        cin>>x[i];
        if(x[i]==0) break;
        i++;
    }
    
    for(size_t j = 0; j < i; j++)
    {
        cout<<"Case "<<j+1<<":"<<" "<<x[j]<<endl;
    }
    
}
