#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int>::iterator itr, vector<int>::iterator itr_last, int rest){
    if(rest==0) return true;
    if(itr>=itr_last) return false;
    return solve(itr+1, itr_last, rest) || solve(itr+1, itr_last, rest-*itr);
}

int main(void){
    int nb; cin>>nb;
    vector<int> elems; elems.resize(nb);
    for(auto& a:elems) cin>>a;
    cin>>nb;
    int num;
    while(cin>>num){
        if(solve(elems.begin(),elems.end(),num)) cout<<"yes\n";
        else cout<<"no\n";
    }
}