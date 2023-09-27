#include <iostream>
#include <vector>
using namespace std;

const int inf = 1000000000;

class edge;
class heap_node;

class vertex{
    public:
        vector<edge*> edges; 
        vertex *prev;
        int d;
        heap_node *node;
        vertex(){
            d = inf;
            prev = 0;
            node = 0;
        }
};

class edge{
    public:
        vertex *to,*from;
        int d;
        edge(vertex *_to, int _d){
            to = _to;
            d = _d;
        }
};

class heap_node{
    public:
        int id;
        vertex *data;
        heap_node(int _id, vertex *_data){
            id = _id;
            data = _data;
        }
};

class heap{
    public:
        vector<heap_node*> nodes;
        heap(){
            nodes.push_back(0);
        }
        void swap_node(int a, int b){
            heap_node *tmp = nodes[a];
            nodes[a] = nodes[b];
            nodes[b] = tmp;
            nodes[a]->id = a;
            nodes[b]->id = b;
        }
        void up_heap(int i){
            if(i == 1) return;
            if(nodes[i/2]->data->d > nodes[i]->data->d){
                swap_node(i/2,i);
                up_heap(i/2);
            }
        }
        void down_heap(int i){
            if (2 * i >= nodes.size()) return ;
            if(nodes.size() > 2*i){
                int to = 2 * i;
                if(2*i+1 < nodes.size()){
                    if(nodes[2*i]->data->d > nodes[2*i+1]->data->d){
                        to += 1;
                    }
                }
                if(nodes[i]->data->d > nodes[to]->data->d){
                        swap_node(i,to);
                        down_heap(to);
                    }
            }
        }
        heap_node *push(vertex *data){
            heap_node *add = new heap_node(nodes.size(),data);
            nodes.push_back(add);
            up_heap(add->id);
            return add;
        }
        heap_node* top(){
            return nodes[1];
        }
        void pop(){
            heap_node *tmp = nodes[1];
            swap_node(1,nodes.size()-1);
            nodes.resize(nodes.size()-1);
            delete tmp;
            down_heap(1);
        }
        void updata(heap_node *node,int new_data){
            int old = node->data->d;
            node->data->d = new_data;
            if(old < new_data){
                down_heap(node->id);
            }else if(old > new_data){
                up_heap(node->id);
            }
        }
};

void dijkstra(vertex *s){
    heap h;
    s->d = 0;
    s->node = h.push(s);
    while(h.nodes.size() > 1){
        vertex *v = h.top()->data;
        h.pop();
        for(int i = 0; i < v->edges.size(); i++){
            edge *e = v->edges[i]; 
            if(e->to->node == NULL) e->to->node = h.push(e->to);
            if(e->to->d > v->d + e->d){
                h.updata(e->to->node,v->d + e->d);
            }
        }
    }
}

int main(){
    int n,m,r,temp1,temp2,d;
    cin >> n >> m >> r;
    vertex *V[n];
    for(int i = 0; i < n; i++) V[i] = new vertex();
    for(int i = 0; i < m; i++){
        cin >> temp1 >> temp2 >>d;
        V[temp1]->edges.push_back(new edge(V[temp2],d));
    }
    dijkstra(V[r]);
    for(int i = 0; i < n; i++){
        if(V[i]->d < inf){
            cout << V[i]->d << endl;
        }else{
            cout << "INF" << endl;
        }
    }
}
