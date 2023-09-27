#include<iostream>
using namespace std;

#define max 100001

typedef struct pp{
    char Name[12];
    long Time;
} TASK;

TASK Queue[max];
long head=0,tail=0;
long N,QT;

void Enqueue(TASK in){
    Queue[tail] = in;
    tail = (tail+1)%max;
}

TASK Dequeue(){
    TASK x = Queue[head];
    head = (head+1)%max;
    return x;
}

int main(){
    
    cin >> N >> QT;
    
    for (int i=0; i<N; i++) {
        TASK ii;
        cin >> ii.Name >> ii.Time;
        Enqueue(ii);
    }
    
    long time=0;
    
    while (head != tail) {
        TASK ii = Dequeue();
        
        if (ii.Time <= QT ){
            time += ii.Time;
            cout << ii.Name << " " << time << endl;
        }else{
            time += QT;
            ii.Time -= QT;
            Enqueue(ii);
        }
    }
    
    
    return 0;
}