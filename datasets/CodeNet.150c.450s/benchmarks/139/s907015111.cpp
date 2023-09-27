#include <iostream>
#include <vector>
#include <string>
using namespace std;

class vertex;
class edge;

class list_node{
    public:
        list_node *prev, *next;
        vertex *data;
        list_node(list_node *_prev,list_node *_next,vertex *_data){
            prev = _prev;
            next = _next;
            data = _data;
        }
};

class list{
    public:
        list_node *front, *back;
        list(){
            front = new list_node(0,0,0);
            back = new list_node(front,0,0);
            front->next = back;
        }
        ~list(){
            list_node *node = front;
            while(node){
                list_node *next = node->next;
                delete node;
                node = next;
            }
        }

        void insert_next(vertex *v,list_node *N){
            list_node *pre_next = N->next;
            N->next = new list_node(N,pre_next,v);
            pre_next->prev = N->next;
        }

        void push_back(vertex* V){
            insert_next(V,back->prev);
        }

        list_node* get_last(){
            return back->prev;
        }
        list_node* get_first(){
            return front->next;
        }
};

class vertex{
    public:
        vector<edge*> edges;
        vertex *prev;
        int label,d;
        vertex(int _label){
            d = -1;
            label = _label;
        }
};

class edge{
    public:
        vertex *to;
        edge(vertex *_to){
            to = _to;
        } 
};

void BFS(vertex *s){
    list *l = new list[100000];
    l[0].push_back(s);
    for(int i = 0; i < 100000; i++){
        for(list_node *node = l[i].get_first(); node != l[i].back; node = node->next){
            vertex *v = node->data;
            for(int j = 0; j < v->edges.size(); j++){
                vertex *to = v->edges[j]->to;
                if(to->prev != 0) continue;
                l[i+1].push_back(to);
                to->prev = v;
            }
        }
    }

}

int main(){
    int N,M,temp1,temp2;
    string result;
    cin >> N >> M;
    vertex *V[N+1];
    for(int i = 0; i <= N; i++){
        V[i] = new vertex(i);
    }
    for(int i = 0; i < M ; i++){
        cin >> temp1 >> temp2;
        V[temp1]->edges.push_back(new edge(V[temp2]));
        V[temp2]->edges.push_back(new edge(V[temp1]));
    }
    BFS(V[1]);
    result = "Yes";
    for(int i = 1; i <= N; i++){
        if(V[i]->label == -1) result = "No";
    }
    cout << result << endl;
    for(int i = 2; i <= N; i++){
        cout << V[i]->prev->label << endl;
    }

}