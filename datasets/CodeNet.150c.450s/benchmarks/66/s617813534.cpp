#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
    string log[]={"Opened by ","Closed by ","Unknown "};
    int state=0;
    map<string,int>M;
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        M[str]=1;
    }
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(M.find(str)!=M.end())cout<<log[state]<<str<<endl;
        else{
            cout<<log[2]<<str<<endl;
            continue;
        }
        state=1-state;
    }
    return 0;
}