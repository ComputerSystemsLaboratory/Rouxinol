#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string nodeProfileOf(std::vector<int> tree, int no){
    stringstream res;
    
    res <<"node "<<no<<": "
        <<"key = "<<tree[no-1]<<", ";
    if(no!=1)
        res <<"parent key = "<<tree[no/2-1]<<", ";
    if(no*2-1<tree.size())
        res <<"left key = "<<tree[no*2-1]<<", ";
    if(no*2<tree.size())
        res <<"right key = "<<tree[no*2]<<", ";
    res <<"\n";
    
    return res.str();
}

int main(void){cin.tie(0);ios::sync_with_stdio(false);

    int nb_nodes; cin>>nb_nodes;
    std::vector<int> tree(nb_nodes);
    for(auto& a:tree) cin>>a;
    
    for(int no=1;no<=tree.size();++no){
        cout<<nodeProfileOf(tree, no);
    }
}