#include<iostream>
#include<algorithm>
using namespace std;

int partition(int *a, int p, int r){
        int x = a[r];
        int i = p-1;
        for(int j=p;j<r;j++){
                if(a[j]<=x){
                        i++;
                        swap(a[i],a[j]);
                }
        }
        swap(a[i+1],a[r]);
        return i+1;
}

int main(){
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++) cin>>a[i];

        int p = partition(a, 0, n-1);

        for(int i=0;i<n;i++){
                if(i==p) cout<<"[";
                cout<<a[i];
                if(i==p) cout<<"]";
                if(i<n-1) cout<<" ";
                else cout<<endl;
        }
        return 0;
}
