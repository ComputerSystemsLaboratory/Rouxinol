#include <iostream>
using namespace std;
int main(){
    int n,tree[1000000]={};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tree[i];
    }
    for(int i=1;i<=n;i++){
        cout<<"node "<<i<<": key = "<<tree[i]<<", ";
        if(tree[i/2]!=0){
            cout<<"parent key = "<<tree[i/2]<<", ";
        }
        if(tree[2*i]!=0){
            cout<<"left key = "<<tree[2*i]<<", ";
        }
        if(tree[(2*i)+1]!=0){
            cout<<"right key = "<<tree[(2*i)+1]<<", ";
        }
        cout<<endl;
    }
    return 0;
}
