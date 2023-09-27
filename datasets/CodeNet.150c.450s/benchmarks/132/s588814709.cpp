#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    while(1){
        int n, p; cin >> n >> p;
        if(!n && !p) break;
        
        int now = p, id = 0;
        int man[50] = {0};
        while(1){
            if(now == 0){
                now = man[id];
                man[id] = 0;
            } else {
                man[id]++;
                now--;
                if(man[id] == p) break;
            }
            id = (id + 1) % n;
        }
        cout << id << endl;
    }
}