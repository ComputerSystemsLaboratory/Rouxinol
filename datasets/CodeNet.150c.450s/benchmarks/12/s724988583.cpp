#include <iostream>
using namespace std;
struct node{
    int key,r,l,p,no;
};
int main(void){
    int n;
    cin >> n;
    node a[n+1];
    for(int i=1;i<n+1;i++){
        a[i].no=i;
        cin >> a[i].key;
    }
    for(int i=1;i<n+1;i++){
        a[i].p=a[i/2].key;
        a[i].l=a[2*i].key;
        a[i].r=a[2*i+1].key;
    }
    for(int i=1;i<n+1;i++){
        cout << "node " << i << ": key = "<<a[i].key<<", ";
        if(i/2>0)cout <<"parent key = "<<a[i].p<< ", ";
        if(2*i<n+1)cout << "left key = "<<a[i].l<< ", ";
        if(2*i+1<n+1)cout << "right key = "<< a[i].r<<", ";
        cout << endl;
    }
    
}

