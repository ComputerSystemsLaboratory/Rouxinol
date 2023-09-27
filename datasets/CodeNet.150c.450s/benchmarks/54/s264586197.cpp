#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,tmp;
    cin>>tmp;
    int cunt=0;                                            
    for(int i=0;i<tmp.size();i++){
        if(tmp[i]>='A'&&tmp[i]<='Z')
            tmp[i]+='a'-'A';
    }   
    while(cin>>str){    
        if(str=="END_OF_TEXT")break;
        for(int i=0;i<str.size();i++){
            if(str[i]>='A'&&str[i]<='Z')
                str[i]+='a'-'A';
        }    
        if(str==tmp)
            cunt++;
    }   
    cout<<cunt<<"\n";;
    return 0;
}

