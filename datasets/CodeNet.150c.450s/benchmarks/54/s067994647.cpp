#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    char tmp[1000][1000];
    string cp;
    cin>>cp;
    int stop,ans=0,st[1000]={};
    for(int i=0;;i++){
        cin>>s;
        if(s=="END_OF_TEXT"){
            stop=i;
            break;
        }
        for(int j=0;j<s.size();j++){
            if('A'<=s[j] && s[j]<='Z'){
                s[j]+=32;
            }
            tmp[i][j]=s[j];
            st[i]++;
        }
    }
    bool judge;
    for(int i=0;i<stop;i++){
        if(tmp[i][0]==cp[0]){
            if(st[i]!=cp.size()){
                continue;
            }
            judge=true;
            for(int j=0;j<st[i];j++){
                if(tmp[i][j]!=cp[j]){
                    judge=false;
                }
            }
            if(judge){
                /*for(int j=0;j<st[i];j++){
                    cout<<tmp[i][j];
                }*/
                //cout<<endl;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    //cout<<stop<<endl;
    return 0;
}

