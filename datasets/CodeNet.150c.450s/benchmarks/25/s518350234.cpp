#include<bits/stdc++.h>
using namespace std;
char a;
int kotae[26],b;
int main(void){
    while(1){
        if(scanf(" %c",&a) == EOF)break;
        for(int j=0;j<26;j++){
            if(a=='a'+j ||a=='A'+j){
                kotae[j]+=1;
            }
        }
    }
    for(int i=0;i<26;i++){
        cout<<(char)('a'+i)<<" : "<<kotae[i]<<endl;
    }
}

