#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<cstdlib>
#include<queue>
using namespace std;

int main(){
    int n, q;
    queue<string>  name;
    queue<int> time;
    cin>>n>>q;
    
    for(int i=0; i<n; i++){
        string a;
        int t;
        cin>>a>>t;
        name.push(a);
        time.push(t);
    }
    
    int T=0;
    while(!time.empty()){
        if(time.front()>q){
            T+=q;
            time.front()-=q;
            time.push(time.front());
            time.pop();
            name.push(name.front());
            name.pop(); 
        }else {
            T+=time.front();
            cout<<name.front()<<' '<<T<<endl;
            name.pop();
            time.pop();
        }
    }
    
}

