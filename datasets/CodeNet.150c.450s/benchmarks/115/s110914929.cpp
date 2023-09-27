#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int lcs(string s, string t){
        int a[s.size()+1][t.size()+1];
        for(int i=0;i<s.size()+1;i++) a[i][0]=0;
        for(int i=0;i<t.size()+1;i++) a[0][i]=0;
        for(int i=1;i<s.size()+1;i++){
                for(int j=1;j<t.size()+1;j++){
                        if(s[i-1]==t[j-1]) a[i][j] = a[i-1][j-1]+1;
                        else a[i][j] = max(a[i-1][j], a[i][j-1]);
                }
        }
        return a[s.size()][t.size()];
}

int main(){
        string s,t;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>s>>t;
                cout<<lcs(s,t)<<endl;
        }
        return 0;
}
