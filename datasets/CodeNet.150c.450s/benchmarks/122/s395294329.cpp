#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
    int n;
    string w;
    priority_queue<int> s;
    while(cin>>w && w!="end"){
        if(w=="insert"){
            cin>>n;
            s.push(n);
        }
        else{
            n=s.top();
            s.pop();
            cout<<n<<endl;
        }
    }
}
