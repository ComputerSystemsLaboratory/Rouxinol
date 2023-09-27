#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,na,nb;
    while(cin>>m>>na>>nb){
        if(m==0){
            break;
        }
        int p[m];
        for(int i=0;i<m;i++){
            cin>>p[i];
        }
        sort(p,p+m);
        reverse(p,p+m);
        int k=p[na-1];
        int c=k-p[na];
        int l=na;
        for(int i=na;i<nb;i++){
            if(c<=p[i]-p[i+1]){
                l=i+1;
                c=p[i]-p[i+1];
            }
        }
        cout<<l<<endl;
    }
}
