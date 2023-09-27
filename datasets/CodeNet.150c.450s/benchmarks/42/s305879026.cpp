#include <iostream>
using namespace std;

int head;
int tail;
const int LEN = 100005;


struct ProcessInfo{
    string name;
    int time;
};

ProcessInfo queues[LEN];

void initialize(){
    head = tail =0;
}

bool isEmpty(){
    if(head==tail){
        return true;
    }
    else{
        return false;
    }
}

void enqueue(ProcessInfo pi){
    queues[tail]=pi;
    tail = (tail+1)%LEN;
}

ProcessInfo dequeue(){
    ProcessInfo temp = queues[head];
    head = (head+1)%LEN;
    return temp;
}

int main(){
    //initializing
    int n,p;
    int totaltime=0;
    ProcessInfo temp;
    cin >>n;
    cin >>p;
    for(int i=0;i<n;i++){
        cin >> queues[i].name;
        cin >> queues[i].time;
    }
    head =0;
    tail =n;
    while (!isEmpty()) {
        if(queues[head].time>p){
            queues[head].time -=p;
            totaltime+=p;
            temp =dequeue();
            enqueue(temp);
        }
        else{
            temp = dequeue();
            totaltime+=temp.time;
            cout << temp.name << " " << totaltime << endl;
        }
    }
}