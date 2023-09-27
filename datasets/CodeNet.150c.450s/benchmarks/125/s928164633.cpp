#include<iostream>
#include<vector>

#define MAX 105

struct Point{
    int id;
    int d;
    int f;
    bool flag;
    std::vector<int> child;
};

int stack[MAX];
int sp = 0;
int count = 1;

Point p[MAX];

void push(int id){
    if(p[id].flag == false){
        stack[sp++] = id;
        p[id].d = count++;
        p[id].flag = true;
    }
}

void pop(){
    p[stack[--sp]].f = count++;
    //return stack[sp];
}

void dft(int id){
    //std::cout << id << "に対しdft\n";
    push(id);
    int size = p[id].child.size();
    for(int i=0;i<size;i++){
        if(p[p[id].child[i]].flag == false){
            dft(p[id].child[i]);
        }
    }
    pop();
}

int main(){
    int n;
    int size;
    std::cin >> n;
    for(int i=1;i<=n;i++){
        std::cin >> p[i].id >> size;
        for(int j=0;j<size;j++){
            int tmp;
            std::cin >> tmp;
            p[i].child.push_back(tmp);
        }
    }
    for(int i=1;i<=n;i++){
        if(p[i].flag == false){
            dft(i);
        }
    }
    
    for(int i=1;i<=n;i++){
        std::cout << p[i].id << ' ' << p[i].d << ' ' << p[i].f << '\n';
    }
    
    return 0;
}
    

