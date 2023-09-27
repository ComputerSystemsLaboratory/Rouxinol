#include <bits/stdc++.h>

using namespace std;


void insert(vector<int> &p_q,int last,int val){
    p_q.push_back(val);
    last++;
    int last_p = (last-1)/2;
    while(last >= 0 && p_q[last] > p_q[last_p]){
        swap(p_q[last],p_q[last_p]);
        last = last_p;
        last_p = ((last-1)/2);
    }
}

void make_heap(vector<int> &p_q,int size,int idx){
    int left  = 2*idx+1;
    int right = left+1;

    int max_i = idx;
    if(left < size && p_q[left] > p_q[idx])
        max_i = left;
    if(right < size && p_q[right] > p_q[max_i])
        max_i = right;
    
    if(max_i != idx){
        swap(p_q[idx],p_q[max_i]);
        make_heap(p_q,size,max_i);
    }
}

void extract(vector<int> &p_q){
    int size = p_q.size();
    if(size < 1) return;
    int ret = p_q[0];
    p_q[0] = p_q[size-1];
    p_q.pop_back();
    make_heap(p_q,size,0);

    cout << ret << endl;
}

void print_queue(vector<int> &p_q){
    for(int i=0;i<p_q.size();i++)
        cout << p_q[i] << " ";
    cout << endl;
}

int main(){
    string order;
    int val;
    vector<int> p_queue;

    while(1){
        cin >> order;
        if(order == "insert"){
            cin >> val;
            insert(p_queue,p_queue.size()-1,val);
        }
        else if(order == "extract"){
           extract(p_queue);
        }
        else if(order == "end")
            break;
        else print_queue(p_queue);

    }

}
