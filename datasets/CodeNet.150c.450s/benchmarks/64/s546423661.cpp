#include<iostream>
#include<stdlib.h>
using namespace std;

int n, q;
int *a;

bool solve(int p, int t){
        if(t==0){
                return true;
        }else if(t<0||p==n){
                return false;
        }else{
                return solve(p+1, t) || solve(p+1, t-a[p]);
        }
}

int main(){
        cin>>n;
        a = (int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>q;
        int m[q];
        for(int i=0;i<q;i++) cin>>m[i];
        for(int i=0;i<q;i++){
                if(solve(0,m[i])) cout<<"yes"<<endl;
                else cout<<"no"<<endl;
        }
        free(a);
        return 0;
}
