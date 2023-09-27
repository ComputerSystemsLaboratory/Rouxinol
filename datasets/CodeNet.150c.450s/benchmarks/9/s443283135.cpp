#include<iostream>
#include<string>
using namespace std;
int main(){
    int m,h;
    while(1){
        char tmp[400];
        string str;
        cin>>str;
        if(str=="-"){break;}
        for(int i=0;i<str.size();i++){
            tmp[i]=str[i];
            tmp[str.size()+i]=str[i];
        }
        cin>>m;
        int sum=0;
        for(int i=0;i<m;i++){
            cin>>h;
            sum+=h;
        }
        int count=0;
        for(int i=sum%str.size();;i++){
            cout<<tmp[i];
            count++;
            if(count==str.size()){
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}

