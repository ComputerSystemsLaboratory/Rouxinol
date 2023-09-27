#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
    string s;
    vector<string> v;
    while(cin>>s){
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    int l=0;
    for(int i=0;i<(int)v.size();i++){
        if(v[i].size() > v[l].size())l=i;
    }
    int f=0,fmax=0;
    for(int i=0;i<(int)v.size();i++){
        int j=i;
        while(j<(int)v.size() && v[i]==v[j])j++;
        if(j-i > fmax){
            fmax = j;
            f = i;
        }
        i=j;
    }
    cout << v[f] << " " << v[l] << endl;
}