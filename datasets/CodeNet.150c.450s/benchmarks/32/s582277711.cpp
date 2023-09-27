#include <iostream>
#include <vector>
using namespace std;

int main(){
    while(true){
        int m, min, max, p;
        vector<int> score;
        int n, gap=0;
        cin >> m >> min >> max;
        if(!(m||min||max)) break;
        for(int i=0;i<m;++i){
            cin >> p;
            score.push_back(p);
        }
        for(int i=min;i<=max;++i){
            if(gap <= score[i-1]-score[i]){
                gap = score[i-1]-score[i];
                n = i;
            }
        }
        cout << n << endl;
    }
}