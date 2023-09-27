#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[200],p[100];
    
    cin>>s>>p;

    char s2[100];
    strcpy(s2,s);
    strcat(s,s2);

    if( strstr(s,p)!=NULL)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
