#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<string> s;
    string v,w;
    for(int i=0;i<n;i++){
        cin>>v>>w;
        if(v=="insert"){
            s.insert(w);
        }
        else{
            if(s.count(w)){cout<<"yes"<<endl;}
            else{cout<<"no"<<endl;}
        }
    }
}
