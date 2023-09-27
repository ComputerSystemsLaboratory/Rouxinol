#include <iostream>
#include<set>
#include<string>
using namespace std;
int main(void){
    set<string> ss;
    string s,a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="insert"){
            cin>>a;
            ss.insert(a);
        }
        else if(s=="find"){
            cin>>a;
            if(ss.find(a)==ss.end()){
                cout<<"no"<<endl;
            }
            else cout<<"yes"<<endl;
        }
    }
    return 0;
    // Your code here!
    
}