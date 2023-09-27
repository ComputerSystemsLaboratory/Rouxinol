#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,n,str[30],fin[30],ans[31],add[31],now=0;
    char stri[7];
    cin>>w>>n;
    for(int i=0;i<n;i++){
        cin>>stri;
        if(stri[3]=='\0'){
            str[i]=stri[0]-'0';
            fin[i]=stri[2]-'0';
        }
        else if(stri[4]=='\0'&&stri[1]==','){
            str[i]=stri[0]-'0';
            fin[i]=(stri[2]-'0')*10+(stri[3]-'0');
        }
        else if(stri[4]=='\0'){
            str[i]=(stri[0]-'0')*10+(stri[1]-'0');
            fin[i]=stri[3]-'0';
        }
        else {
            str[i]=(stri[0]-'0')*10+(stri[1]-'0');
            fin[i]=(stri[3]-'0')*10+(stri[4]-'0');
        }
        add[i]=fin[i]-str[i];
    }
    for(int i=1;i<=w;i++){
        now=i;
        for(int j=0;j<n;j++){
            if(now==str[j])now+=add[j];
            else if(now==fin[j])now-=add[j];
        }
        ans[now]=i;
    }
    for(int i=1;i<=w;i++)cout<<ans[i]<<endl;
}