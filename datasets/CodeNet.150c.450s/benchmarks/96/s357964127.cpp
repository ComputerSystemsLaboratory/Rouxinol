#include <bits/stdc++.h>
using namespace std;
int main(){
    string botun[] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
 
        string ans=""; 
        int btn=0,count=0;
        for(int j=0;j<s.size();j++){
            if(btn ==0 &&(int)s[j]>0){
                btn=s[j]-'0';
                count=0;
            }else if(btn==(int)s[j]-'0'){
                count++;
            }else if((int)s[j]-'0'==0&&btn>0){
                ans += botun[btn][count % botun[btn].size()];
                btn=0;
                count=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}