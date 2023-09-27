#include<iostream>
using namespace std;
int main(){
        int n,q,r=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>q;
        int b[q];
        for(int i=0;i<q;i++) cin>>b[i];
        for(int i=0;i<q;i++) {
                for(int j=0;j<n;j++){
                        if(a[j]==b[i]){
                                r++;
                                break;
                        }
                }
        }
        cout<<r<<endl;
        return 0;
}
