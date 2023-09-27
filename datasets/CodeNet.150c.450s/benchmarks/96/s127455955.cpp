#include <bits/stdc++.h>

using namespace std;

long long INF=1e15;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    string s1,s2,s3,s4,s5,s6,s7,s8,s9;
    s1=".,!? ";s2="abc";s3="def";s4="ghi";s5="jkl";
    s6="mno";s7="pqrs";s8="tuv";s9="wxyz";
    
    for(int i=0;i<n;i++){
        string S;
        cin>>S;
        int sum=0;
        char c;
        string s;
        bool f=false;
        for(int j=0;j<S.size();j++){
            if(S[j]!='0'){
                f=true;
                c=S[j];
                sum++;
                if(c=='1')s=s1;if(c=='2')s=s2;if(c=='3')s=s3;
                if(c=='4')s=s4;if(c=='5')s=s5;if(c=='6')s=s6;
                if(c=='7')s=s7;if(c=='8')s=s8;if(c=='9')s=s9;
            }
            else{
                sum--;
                if(s==s1)sum%=5;
                else if(s==s7||s==s9)sum%=4;
                else sum%=3;
                if(f)cout<<s[sum];
                sum=0;
                f=false;
            }
        }
        cout<<endl;
    }
}
