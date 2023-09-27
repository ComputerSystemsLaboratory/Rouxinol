#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,num,max=-1,ans[101],a=0,b=0;
    vector<int>count(101,0);
    while(cin>>num){
            count[num]++;
            
        }
        for(int i=100;i>=0;i--){
            if(count[i]>max && count[i]!=0){
                b=count[i];
                max=count[i];
            }
        }
    for(int i=0;i<101;i++){
        if(count[i]==b){
            cout<<i<<endl;
        }
    }
    for(int i=0;i<a;i++){
        
    }
    return 0;
}