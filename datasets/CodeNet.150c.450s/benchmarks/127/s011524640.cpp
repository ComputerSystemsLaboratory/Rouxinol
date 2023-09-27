#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        string s;cin>>s;
        vector<string> buf;
        for(int i=1;i<s.size();i++){
            string s1=s.substr(0,i);
            string s2=s.substr(i,s.size()-i);
            string sr1;
            reverse(s1.begin(),s1.end());
            sr1=s1;
            reverse(s1.begin(),s1.end());
            string sr2;
            reverse(s2.begin(),s2.end());
            sr2=s2;
            reverse(s2.begin(),s2.end());
            buf.push_back(s1+s2);
            buf.push_back(s1+sr2);
            buf.push_back(sr1+s2);
            buf.push_back(sr1+sr2);
            buf.push_back(s2+s1);
            buf.push_back(s2+sr1);
            buf.push_back(sr2+s1);
            buf.push_back(sr1+sr2);




        }
        sort(buf.begin(),buf.end());
        buf.erase(unique(buf.begin(),buf.end()),buf.end());
        cout<<buf.size()<<endl;




    }

    return 0;
}