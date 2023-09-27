#include <iostream>
#include <vector>

using namespace std;

int main(){
    while(true){
        int n, a, b, c, x;
        cin >> n >> a >> b >> c >> x;
        if(n == 0){ break; }
        vector<int> y;
        for(int i = n; i > 0; --i){
            int tmp;
            cin >> tmp;
            y.push_back(tmp);
        }
        int answer = 0, idx = 0;
        while(answer <= 10000){
            if(x == y[idx]){
                if(++idx == n){ break; }
            }
            x = (a * x + b) % c;
            ++answer;
        }
        cout << (answer > 10000 ? -1 : answer) << endl;
    }
    return 0;
}