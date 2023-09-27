#define REP(i,n) for(int i=0;i<(n);i++)
#include <queue>
#include <string>
#include <iostream>
using namespace std;

int main(){
        int n,q,time_sum = 0;
        typedef struct process{
                string name;
                int time;
        } process_t;
        queue<process_t> Q;
        cin >> n >> q;
        REP(i,n){
                process_t process_in;
                cin >> process_in.name >> process_in.time;
                Q.push(process_in);
        }
        while(! Q.empty()){
        process_t temp = Q.front();
        Q.pop();
        if(temp.time - q > 0){
                time_sum += q;
                temp.time -= q;
                Q.push(temp);
        }
        else{
                time_sum += temp.time;
                cout << temp.name << " " << time_sum << endl;
        }
}
}