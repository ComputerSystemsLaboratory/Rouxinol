#include<bits/stdc++.h>
using namespace std;

char c[4]={'m','c','x','i'};
int main(){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        string s[2];
        cin>>s[0]>>s[1];
        int x[2];
        x[0]=0;
        x[1]=0;
        int buf=1;
        for(int j=0;j<2;j++)
        for(int i=0;i<s[j].size();i++){
            if('2'<=s[j][i] && s[j][i]<='9'){
                buf=s[j][i]-'0';
                }
            else{
            if(s[j][i]=='m')
                    x[j]+=buf*1000;
            if(s[j][i]=='c')
                    x[j]+=buf*100;
            if(s[j][i]=='x')
                    x[j]+=buf*10;
            if(s[j][i]=='i')
                    x[j]+=buf;
            buf=1;
            }


        }
        int sum=x[0]+x[1];
        int y[4];
        for(int i=0;i<4;i++){
            y[3-i]=sum%10;
            sum/=10;

        }
        string res="";
        for(int i=0;i<4;i++)
            if(y[i]!=0){
                if(y[i]==1)
                    res+=c[i];
                else{

                    res+=(y[i]+'0');
                    res+=c[i];
                }

            }
        cout<<res<<endl;
    }

    return 0;
}