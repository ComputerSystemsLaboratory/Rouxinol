#include<sstream>
#include<string>
#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
class A{
public:
    string Int_to_String(int n)
    {
        ostringstream stream;
        stream<<n;
        return stream.str();
    }
};
int main(){
    queue<string> Q;
    int n,q,t=0;
    cin>>n>>q;
    string nt;
    while(cin>>nt){
        Q.push(nt);
    }
    while(!Q.empty()){
        string n1=Q.front();
        Q.pop();
        string n2;
        n2=Q.front();
        int n3;
        
        n3=atoi(n2.c_str());
        
        Q.pop();
        if(n3<=q){
            t+=n3;
            cout<<n1<<" "<<t<<endl;
            }
        else{
            n3-=q;
            t+=q;
            Q.push(n1);
            A a;
            Q.push(a.Int_to_String(n3));
            //Q.push(to_string(n3));
        }
    }
    return 0;
}
    
    
    