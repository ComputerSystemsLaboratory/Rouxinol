#include <vector>
#include <iostream>
using namespace std;



int main(){
    string cmd;
    int num;
    vector<int> q;
    while (cin >> cmd && cmd != "end") {
        if (cmd == "insert") {
            cin >> num;
            q.push_back(num);
            int n = q.size()-1;
            while(n > 0 && q[(n-1)/2] < q[n]){
                swap(q[(n-1)/2], q[n]);
                n = (n-1)/2;
            }
        }else if(cmd == "extract"){
            int ans = q[0];
            q[0] = q[q.size()-1];
            q.pop_back();
            int n = 0;
            int N = q.size();
            while(2*n+1 < N){
                int i;
                if(2*n+2 < N){
                    i = (q[2*n+1] > q[2*n+2] ? 2*n+1 : 2*n+2);
                }else{
                    i = 2*n+1;
                }
                if (q[i] > q[n]){
                    swap(q[i], q[n]);
                    n = i;
                }else{
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}