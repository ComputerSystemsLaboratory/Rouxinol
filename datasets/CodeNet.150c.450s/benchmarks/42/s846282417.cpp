#include <stdio.h>
#include <queue>
#include <string.h>

using namespace std;
#pragma warning(disable : 4996)
class Proc {
    public:
        char name[10];
        int time;
        Proc(const char *name, int time);
};
Proc::Proc(const char *name, int time) {
    this->time = time;
    strcpy(this->name, name);
}

int main(int argc, char const* argv[])
{
    queue<Proc> pq;
    int n, q, ct = 0;

    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        char name[10];
        int t;
        scanf("%s %d", name, &t);
        pq.push(Proc(name, t));
    }

    while(!pq.empty()){
        ct += q;
        Proc proc = pq.front();
        pq.pop();

        proc.time -= q;
        if(proc.time <= 0){
            ct += proc.time;
            printf("%s %d\n", proc.name, ct);
        }else{
            pq.push(proc);
        }
    }
    return 0;
}