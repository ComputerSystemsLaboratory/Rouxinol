#include<iostream>
#include<string>
using namespace std;
int main(){
    string command,q,str,str1,p;
    int n,a,b,c,d;
    cin>>str>>n;
    for(int i=0;i<n;i++){
        cin>>command>>a>>b;
        if(command=="print"){
            q=str.substr(a,b-a+1);
            cout<<q<<endl;
        }
        if(command=="reverse"){
            str1=str.substr(a,b-a+1);
            c=str1.size();
            for(int i=0;i<c;i++){
                str[i+a]=str1[c-i-1];
            }
        }
        if(command=="replace"){
            cin>>p;
            str=str.replace(a,b-a+1,p);
            
        }
    }
    return 0;
}
