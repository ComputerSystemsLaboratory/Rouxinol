#include<iostream>
using namespace std;

int parent(int i){return i/2;}
int left(int i){return i*2;}
int right(int i){return i*2+1;}

int main(){

    int n;
    while(cin>>n){
        int binary_tree[255];
        for(int i=1;i<=n;i++)
            cin>>binary_tree[i];
        
        for(int i=1;i<=n;i++){
            printf("node %d: key = %d, ",i,binary_tree[i]);
            if(parent(i)>0)
                printf("parent key = %d, ",binary_tree[parent(i)]);
            if(left(i)<=n)
                printf("left key = %d, ",binary_tree[left(i)]);
            if(right(i)<=n)
                printf("right key = %d, ",binary_tree[right(i)]);
            cout<<endl;
        }
    }
}
