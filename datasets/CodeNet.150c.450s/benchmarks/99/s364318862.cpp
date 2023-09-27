#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
map<char,int>M;
int cnv(string str){
    str="."+str;
    int res=0;
    for(int i=0;i<str.length();i++){
        if(M.find(str[i])!=M.end()){
            int a;
            if(str[i-1]>='0'&&str[i-1]<='9'){
                a=str[i-1]-'0';
            }
            else a=1;
            res+=M[str[i]]*a;
        }
    }
    return res;
}
int main(){
    M['m']=1000;M['c']=100;M['x']=10;M['i']=1;
    int n;
    scanf("%d",&n);
    while(n--){
        string s1,s2;
        cin>>s1>>s2;
        int val=cnv(s1)+cnv(s2);
        if(val/1000){
            if(val/1000>1)printf("%d",val/1000);
            printf("m");
        }
        val%=1000;
        if(val/100){
            if(val/100>1)printf("%d",val/100);
            printf("c");
        }
        val%=100;
        if(val/10){
            if(val/10>1)printf("%d",val/10);
            printf("x");
        }
        val%=10;
        if(val){
            if(val>1)printf("%d",val);
            printf("i");
        }
        puts("");
    }
    return 0;
}