#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    string p;
    cin>>s>>p;
    char tmp[300];
    for(int i=1;i<=2;i++){
        for(int j=0;j<s.size();j++){
            if(i==2){
                tmp[j+s.size()]=s[j];
            }
            else{
                tmp[j]=s[j];
            }
        }
    }
    bool judge=false;
    for(int i=0;i<s.size()+s.size();i++){
        if(p[0]==tmp[i]){
            //cout<<p[0]<<":"<<tmp[i]<<endl;
            judge=true;
            for(int j=0;j<p.size();j++){
                //cout<<p[j]<<":"<<tmp[j+i]<<endl;
                if(p[j]!=tmp[i+j]){
                    judge=false;
                    break;
                }
            }
        }
        if(judge){
            break;
        }
    }
    if(judge){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    //cout<<judge<<endl;
    return 0;
}

