#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
        int n;
        cin>>n;
        string s,t;
        set<string> m;
        for(int i=0;i<n;i++){
                cin>>s>>t;
                if(s=="insert") m.insert(t);
                else if(s=="find") {
                        if(m.find(t)==m.end()) cout<<"no"<<endl;
                        else cout<<"yes"<<endl;
                }
        }
        return 0;
}
