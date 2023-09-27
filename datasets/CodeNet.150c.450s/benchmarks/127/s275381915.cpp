#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        set<string>memo;
        for(int i=1;i<=str.length();i++){
            string s[4];
            s[0]=s[1]=str.substr(0,i),s[2]=s[3]=str.substr(i,str.length()-i);
            reverse(s[1].begin(),s[1].end());reverse(s[3].begin(),s[3].end());

            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(i==j)continue;
                    if(i+j<2||i+j>4)continue;
                    memo.insert(s[i]+s[j]);
                }
            }
        }
        cout<<memo.size()<<endl;
    }
    return 0;
}