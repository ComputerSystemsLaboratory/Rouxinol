#include<iostream>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        int binary_tree[255];
        for(int i=1;i<=n;i++)
            cin>>binary_tree[i];
        
        int parent_key,left_key,right_key;
        for(int i=1;i<=n;i++){
            printf("node %d: key = %d, ",i,binary_tree[i]);
            if(i/2>0){
                parent_key=binary_tree[i/2];
                printf("parent key = %d, ",parent_key);
            
            }
            if(i*2<=n){
                left_key=binary_tree[i*2];
                printf("left key = %d, ",left_key);
            }
            if(i*2+1<=n){
                right_key=binary_tree[i*2+1];
                printf("right key = %d, ",right_key);
            }
            cout<<endl;
        }
    }
}
