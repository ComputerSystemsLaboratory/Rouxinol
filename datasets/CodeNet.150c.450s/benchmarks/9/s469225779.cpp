#include <iostream>
#include <string>
using namespace std;
int main(void){
    int siz,time;
    string name;
    while(true){
        cin>>name;
        if(name[0]=='-')break;
        cin>>time;
        for(int abc=0;abc<time;abc++){
            cin>>siz;
            name=name.substr(siz)+name.substr(0,siz);
        }
        cout<<name<<endl;
    }
    
}

