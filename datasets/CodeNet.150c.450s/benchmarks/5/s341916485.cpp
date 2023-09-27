#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){
    
    int a;
    cin>>a;
    int in[a];
    int sum=0;
    for(int i=0;i<a;i++){
        cin>>in[i];
        sum++;
    }
    
    for(int j=sum-1;j>=0;j--){
        if(j==0)cout<<in[j]<<endl;
        else cout<<in[j]<<' ';
    }
    
    
    return 0;

}
