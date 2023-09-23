#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    int i=0;
    char ch[1201],c;
    while(true){
        //cin>>ch[i];
        scanf("%c",&ch[i]);
        if(ch[i]=='\n'){
          break;
        }

        else if(islower(ch[i])){
            c=toupper(ch[i]);
            cout<<c;
        }
        else if(isupper(ch[i])){
            c=tolower(ch[i]);
            cout<<c;
        }
        else{
            cout<<ch[i];
        }
        
        i++;
        
        }
    cout<<endl;
    return 0;
}