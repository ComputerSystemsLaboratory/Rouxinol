#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    vector<int> judge(4,0);
    string judge_name[4] = {"AC","WA","TLE","RE"};

    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=="AC") judge[0]++;
        else if(s[i]=="WA") judge[1]++;
        else if(s[i]=="TLE") judge[2]++;
        else judge[3]++;
    }
    for(int i=0;i<4;i++){
        cout<<judge_name[i]<<" "<<"x"<<" "<<judge[i]<<endl;
    }
    return 0;
}