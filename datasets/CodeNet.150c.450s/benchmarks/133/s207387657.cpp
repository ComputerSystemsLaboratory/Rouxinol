#include <iostream>
using namespace std;

int main(void){
    int D;cin>>D;
    int c[27];
    for(int i=1;i<=26;i++){
        cin>>c[i];
    }
    int s[366][27];
    for(int i=1;i<=D;i++){
        for(int j=1;j<=26;j++){
            cin>>s[i][j];
        }
    }
    int t[366];
    int last[27]={};
    int v=0;
    for(int i=1;i<=D;i++){
        cin>>t[i];
        last[t[i]]=i;
        v+=s[i][t[i]];
        for(int j=1;j<=26;j++){
            v-=c[j]*(i-last[j]);
        }
    cout<<v<<endl;
    }
    return 0;
}
