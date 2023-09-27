#include<bits/stdc++.h>
using namespace std;
typedef long long L;
L n,sum=0,idx;
char res[20];
void encode(char st[]){
    L l=strlen(st);
    for(L i=0;i<l;i++){
        if(st[i]=='m'){
            if(i>0){
                if(st[i-1]>='2'&&st[i-1]<='9'){
                    L d=st[i-1]-'0';
                    sum+=(1000*d);
                    st[i-1]='f';
                }
                else sum+=1000;
                st[i]='f';
            }
            else{
                sum+=1000;st[i]='f';
            }
        }
        else if(st[i]=='c'){
            if(i>0){
                if(st[i-1]>='2'&&st[i-1]<='9'){
                    L d=st[i-1]-'0';
                    sum+=(100*d);
                    st[i-1]='f';
                }
                else sum+=100;
                st[i]='f';
            }
            else{
                sum+=100;st[i]='f';
            }
        }
        else if(st[i]=='x'){
            if(i>0){
                if(st[i-1]>='2'&&st[i-1]<='9'){
                    L d=st[i-1]-'0';
                    sum+=(10*d);
                    st[i-1]='f';
                }
                else sum+=10;
                st[i]='f';
            }
            else{
                sum+=10;st[i]='f';
            }
        }
        else if(st[i]=='i'){
            if(i>0){
                if(st[i-1]>='2'&&st[i-1]<='9'){
                    L d=st[i-1]-'0';
                    sum+=(1*d);
                    st[i-1]='f';
                }
                else sum+=1;
                st[i]='f';
            }
            else{
                sum+=1;
                st[i]='f';
            }
        }
    }
}
void decode(){
    L d=sum/1000;
    if(d){
        if(d>1){
            res[idx++]=d+'0';
            res[idx++]='m';
        }
        else{
            res[idx++]='m';
        }
    }
    sum%=1000;
    d=sum/100;
    if(d){
        if(d>1){
            res[idx++]=d+'0';
            res[idx++]='c';
        }
        else{
            res[idx++]='c';
        }
    }
    sum%=100;
    d=sum/10;
    if(d){
        if(d>1){
            res[idx++]=d+'0';
            res[idx++]='x';
        }
        else{
            res[idx++]='x';
        }
    }
    sum%=10;
    d=sum/1;
    if(d){
        if(d>1){
            res[idx++]=d+'0';
            res[idx++]='i';
        }
        else{
            res[idx++]='i';
        }
    }
    res[idx]='\0';
}
int main(){
    scanf("%lld",&n);
    char st[20],stt[20];
    while(n--){sum=idx=0;
        scanf("%s",st);scanf("%s",stt);
        encode(st);
        encode(stt);
        decode();
        cout<<res<<"\n";
    }
    return 0;
}

