#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sen=0,maxe[2]={0,0},lo=0;
    string str[1000],s;
    while(cin>>s){
        lo=s.size();
        if(maxe[0]<lo){
            maxe[0]=lo;
            maxe[1]=sen;
        }
        str[sen]=s;
        sen++;
    }
    int co=-1,num;
    for(int i=0;i<=sen;i++){
        int cou=0;
        for(int j=i;j<=sen;j++)if(str[i]==str[j])cou++;
        if(co<=cou){
            co=cou;
            num=i;
        }
    }
    cout<<str[num]<<" "<<str[maxe[1]]<<endl;
}