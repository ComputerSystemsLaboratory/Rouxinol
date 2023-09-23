#include<iostream>
using namespace std;
int main(){
        int n,mini,nswap=0;
        int a[100];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
                mini = i;
                for(int j=i+1;j<n;j++){
                        if(a[j]<a[mini]) {
                                mini = j;
                        }
                }
                if(mini!=i){
                        swap(a[mini],a[i]);
                        nswap++;
                }
        }
        for(int i=0;i<n;i++) {
                cout<<a[i];
                if(i==n-1) cout<<endl;
                else cout<<" ";
        }
        cout<<nswap<<endl;
        return 0;
}
