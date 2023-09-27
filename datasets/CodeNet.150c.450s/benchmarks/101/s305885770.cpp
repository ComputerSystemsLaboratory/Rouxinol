#include <iostream>
#include <vector>
#include <string>
using namespace std;
int count = 0;
class edge;

class vertex{
    public:
        int member;
        vector<edge*> edges;
        int label;
        vertex(){
            member = -1;
        }
        void add_member(int n){
            member = n;
        }
};

class edge{
    public:
        vertex *to,*from;
        edge(vertex *_to){
            to = _to;
        }
};

void check_member_dfs(vertex *v){
    v->member = count;
    for(int i = 0; i < v->edges.size(); i++){
        vertex *to = v->edges[i]->to;
        if (to->member >= 0){
            continue;
        }else{
            check_member_dfs(to);
        }
    }
    return;
}

int main(){
    int n,m,temp1,temp2,q;
    cin >> n >> m;
    vertex *V[n];
    for(int i = 0; i < n ; i++) V[i] = new vertex();
    for(int i = 0; i < m; i++){
        cin >> temp1 >> temp2;
        V[temp1]->edges.push_back(new edge(V[temp2]));
        V[temp2]->edges.push_back(new edge(V[temp1]));
    }
    for(int i = 0; i < n; i++){
        if(V[i]->member >= 0){
            continue;
        }else{
            check_member_dfs(V[i]);
            count++;
        }
    }
    cin >> q;
    string result[q];
    for(int i = 0; i < q; i++){
        cin >> temp1 >> temp2;
        if(V[temp1]->member == V[temp2]->member){
            result[i] = "yes";
        }else{
            result[i] = "no";
        }
    }
    for(int i = 0; i < q; i++) cout << result[i] << endl;
}
