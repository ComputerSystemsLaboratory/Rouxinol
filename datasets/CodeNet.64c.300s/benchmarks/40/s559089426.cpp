#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;

    while(1){
        //cin>>ch;
        scanf("%c",&ch);

        if(ch=='\n')break;

        if('a'<=ch && ch<='z')ch-=32;
        else if('A'<=ch && ch<='Z')ch+=32;

        cout<<ch;
    }
    cout<<endl;
    return 0;
}
