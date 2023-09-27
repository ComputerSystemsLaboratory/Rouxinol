#include<iostream>
#include<vector>
#define MAX 100000

struct Person{
    int id;
    bool flag;
    std::vector<int> child;
    int label;
};

Person p[MAX];
int stack[MAX];
int sp = 0;

void push(int id){
    stack[sp++] = id;
    p[id].flag = true;
}

void pop(){
    sp--;
}

void dfs(int id,int k){
    p[id].label = k;
    push(id);
    int size = p[id].child.size();
    for(int i=0;i<size;i++){
        if(p[p[id].child[i]].flag == false){
            dfs(p[id].child[i],k);
        }
    }
    pop();
}

int main(){
    int n,m;
    int s,t,q;
    std::cin >> n >> m;
    
    for(int i=0;i<m;i++){
        std::cin >> s >> t;
        p[s].child.push_back(t);
        p[t].child.push_back(s);
    }
    
    for(int i=0;i<n;i++){
        p[i].id = i;
        if(p[i].flag == false){
            dfs(i,i);
        }
    }
    
    std::cin >> q;
    for(int i=0;i<q;i++){
        std::cin >> s >> t;
        if(p[s].label == p[t].label){
            std::cout << "yes\n";
        }else{
            std::cout << "no\n";
        }
    }
    
    return 0;
}

