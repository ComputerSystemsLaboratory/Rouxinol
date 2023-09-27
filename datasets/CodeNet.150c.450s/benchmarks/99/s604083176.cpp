#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    int n,i;
    cin>>n;
    while(n--){
        cin>>s>>s1;
        int w1=1,w2=0,w3=0,w4=0;
        int sum=0;
        for(i=0;i<s.size();i++){
            if(s[i]>='2'&&s[i]<='9')w1=s[i]-'0';
            else if(s[i] == 'm'){sum+=1000*w1;w1=1;}
            else if(s[i] == 'c'){sum+=100*w1;w1=1;}
            else if(s[i] == 'x'){sum+=10*w1;w1=1;}
            else if(s[i] == 'i'){sum+=w1;w1=1;}
        }
        for(i=0;i<s1.size();i++){
            if(s1[i]>='2'&&s1[i]<='9')w1=s1[i]-'0';
            else if(s1[i] == 'm'){sum+=1000*w1;w1=1;}
            else if(s1[i] == 'c'){sum+=100*w1;w1=1;}
            else if(s1[i] == 'x'){sum+=10*w1;w1=1;}
            else if(s1[i] == 'i'){sum+=w1;w1=1;}
        }
        w1=sum/1000;
        if(w1==1)cout<<"m";
        else if(w1>1)cout<<w1<<"m";
        w2=(sum-w1*1000)/100;
        if(w2==1)cout<<"c";
        else if(w2>1)cout<<w2<<"c";
        w3=(sum-w1*1000-w2*100)/10;
        if(w3==1)cout<<"x";
        else if(w3>1)cout<<w3<<"x";
        w4=(sum-w1*1000-w2*100-w3*10);
        if(w4==1)cout<<"i";
        else if(w4>1)cout<<w4<<"i";
        cout<<endl;
    }
    return 0;
}
 