#include <iostream>
using namespace std;

void strss(char *p,int psize){
    for(int i=0;i<psize;i++){
        if(p[i]>='A'&&p[i]<='Z'){
            int u=p[i]-'A';
            p[i]='a'+u;
        }
    }
    
}


int main(){
    string t;
    cin>>t;
    strss(&t[0],t.size());
    //cout<<t;
   string com;
    int ans=0;
    //com[0]=' ';
    while(true){
        string tcom;
        cin>>tcom;
        if(tcom=="END_OF_TEXT")break;
        strss(&tcom[0],tcom.size());
        if(tcom==t)ans++;
        com+=tcom;
    }
    cout<<ans<<endl;;
    
    return 0;
    
}
