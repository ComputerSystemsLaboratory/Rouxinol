#include <iostream>
using namespace std;
int n;
int a[1000];
void output(){
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i+1<n){
            cout<<" ";
        }
    }
    cout<<endl;
}

int main() {
    //read
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    output();
    //solve
    for(int i=1;i<n;i++){
        int v = i;
        while(v>0&&a[v-1]>a[v]){
                int tmp = a[v];
                a[v]=a[v-1];
                a[v-1]=tmp;
                v--;
        }
        output();
    }
}