#include <iostream>
#include <vector>
using namespace std;

auto itrMinInVector(vector<int>::iterator itr_first, vector<int>::iterator itr_last){
    auto itr_min = itr_first;
    for(auto itr=itr_first;itr!=itr_last;++itr){
        if(*itr_min>*itr) itr_min = itr;
    }
    return itr_min;
}

int cnt=0;
std::vector<int> ssrot(std::vector<int> vec){ 
    for(auto i=vec.begin();i!=vec.end();++i){
        auto j = itrMinInVector(i,vec.end());
        if (*i<=*j) continue;
        swap(*i,*j);
        cnt++; 
    }
    return vec;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int nb; cin>>nb;
    std::vector<int> lines; lines.resize(nb);
    for(auto& a:lines) cin>>a;

    auto sorted = ssrot(lines);
    for(auto& a:sorted) cout<<a<<(&a!=&sorted.back()?" ":"\n");
    cout<<cnt<<"\n";
}