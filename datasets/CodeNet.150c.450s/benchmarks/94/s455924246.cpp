#include<iostream>
using namespace std;
int main(){
        int n, nswap=0;
        int a[101];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
                for(int j=n-1;j>0;j--){
                        if(a[j]<a[j-1]) {
                                swap(a[j],a[j-1]);
                                nswap++;
                        }
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
