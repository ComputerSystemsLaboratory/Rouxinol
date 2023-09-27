#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //read
    int n;
    cin>>n;
    int a[n];
    int count = 0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    //solve
    for(int i=0;i<n;i++){
        int minj = i;
        for(int j=i;j<n;j++){
            if(a[j]<a[minj]){
                minj = j;
            }
        }
        if(a[i]!=a[minj]){
            int tmp = a[i];
            a[i]=a[minj];
            a[minj]=tmp;
            count++;
        }
    }
    //output
    cout<<a[0];
    for(int i = 1;i<n;i++){
        cout<<' '<<a[i];
    }
    cout<<endl;
    cout<<count<<endl;
}