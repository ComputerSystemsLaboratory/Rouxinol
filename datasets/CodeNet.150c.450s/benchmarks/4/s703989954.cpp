#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> G;

    for(;;){
        int m, f, r;
        cin >> m >> f >> r;
        if(m == -1 && f == -1 && r == -1) break;
        if(m == -1 || f == -1){
            G.push_back('F');
        }else if(m + f >= 80){
            G.push_back('A');
        }else if(m + f >= 65){
            G.push_back('B');
        }else if(m + f >= 50){
            G.push_back('C');
        }else if(m + f >= 30){
            if(r >= 50){
                G.push_back('C');
            }else{
                G.push_back('D');
            }
        }else{
            G.push_back('F');
        }
    }

    for(int i = 0; i < G.size(); i++){
        cout << G.at(i) << endl;
    }
}
