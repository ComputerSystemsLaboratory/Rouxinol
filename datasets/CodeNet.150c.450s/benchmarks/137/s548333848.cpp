#include<iostream>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    map<string, int>m;
    int q;
    cin>>q;
    while(q--){
        string command, str;
        cin>>command>>str;
        if(command=="insert"){
            m[str]=1;
        }
        else if(command=="find"){
            map<string, int>::iterator itr=m.find(str);
            if(itr==m.end())
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
    }
    return 0;
}
