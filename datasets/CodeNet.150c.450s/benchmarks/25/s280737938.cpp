#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

int main(){
    int co[40]={};
    int i,j;
    char al[40]="abcdefghijklmnopqrstuvwxyz";
    char ch;
    while(scanf("%c", &ch) != EOF){
        if(isupper(ch)){
            ch=tolower(ch);
        }
        for(i=0;i<26;i++){
            if(ch==al[i]){
                co[i]+=1;
            }
        } 
    }
    for(j=0;j<26;j++){
        cout<<al[j]<<" : "<<co[j]<<endl;
    }
    return 0;
}
