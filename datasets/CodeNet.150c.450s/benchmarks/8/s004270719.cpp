#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string a,b;
    char T[27]="abcdefghijklmnopqrstuvwxyz";
    int c,d=0,e=0,f,g;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>a>>b;
        for(int j=0;j<min(a.size(),b.size());j++){
            for(int k=0;k<26;k++){
                if(a[j]==T[k]){
                    f=k;
                }
                if(b[j]==T[k]){
                    g=k;
                }
            }
            if(f<g){
                e += 3;
                goto Exit;
            }
            else if(g<f){
                d += 3;
                goto Exit;
            }
        }
        if(a.size()<b.size()){
            e += 3;
        }
        else if(b.size()<a.size()){
            d += 3;
        }
        else{
            d += 1;
            e += 1;
        }
        Exit:;
    }
    cout<<d<<' '<<e<<endl;
    return 0;
}