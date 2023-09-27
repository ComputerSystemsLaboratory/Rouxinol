#include <iostream>
#include <vector>

using namespace std;

int main(){
    int w, n, a, b;
    vector<pair<int, int>> h_lines;
    cin >> w >> n;
    vector<int> res(w+1);
    while(scanf("%d,%d",&a,&b)+1){
     h_lines.push_back(pair<int, int>(a,b));   
    }
    
    
    for (int i = 1; i <= w; ++i){
        int where = i;
        for (auto line:h_lines){
            if (line.first == where){
                where = line.second;
            } else if (line.second == where){
                where = line.first;
            }
        }
        res[where] = i;
    }
    
    for (auto itr = res.begin()+1; itr != res.end(); ++itr){cout << *itr << "\n";}
    
 return 0;   
}