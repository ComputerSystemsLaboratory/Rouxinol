#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//ofstream outputfile("test.txt");
int main(){
    //outputfile.close();
    int n;
    string t[10];
    t[1] = ".,!? ";
    t[2] = "abc";
    t[3] = "def";
    t[4] = "ghi";
    t[5] = "jkl";
    t[6] = "mno";
    t[7] = "pqrs";
    t[8] = "tuv";
    t[9] = "wxyz";
    int cc=0;
    while(cin>>n){
        cc++;
        string s[n];
        string ans="";
        int cnt=0;
        for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n;i++){
            ans="";
            //if(s[i][i]=='0')break;
            for(int j=0;j<s[i].length()-1;j++){
                cnt=0;
                bool fl = false;
                while(1){
                    if(s[i][j]=='0'){
                        j++;
                        if(j>(s[i].length()-1)){
                            fl=true;
                            break;
                        }
                        continue;
                    }
                    if(s[i][j]==s[i][j+1]){
                        cnt++;j++;
                    }
                    if(s[i][j+1]=='0'){
                        break;
                    }
                }
                if(fl)break;
                int tmp = s[i][j]-'0';
                ans += t[tmp][(cnt)%t[tmp].length()];
                j++;
            }
        cout<<ans<<endl;
        }
        if(cc==n)break;
    }
}
