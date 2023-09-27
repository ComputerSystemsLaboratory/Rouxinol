#include<bits/stdc++.h>

using namespace std;

vector<int> numbers;

void setNum(vector<vector<int> > a){
    numbers.resize(a.size());
    for(int i = 0; i < numbers.size(); i++)numbers[i] = -1;
    int num = 0;
    queue<int> place;
    place.push(0);
    while(place.size()){
        int now = place.front();
        place.pop();
        numbers[now] = num;
        for(int i = 0; i < a[now].size(); i++){
            int next = a[now][i];
            if(numbers[next] == -1){
                place.push(next);
            }
        }
        if(place.size() == 0){
            for(int i = 0; i < numbers.size(); i++){
                if(numbers[i] == -1){
                    place.push(i);
                    num++;
                    break;
                }
            }
        }
    }
}

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n);
    for(int i = 0; i < m; i++){
        int s, t;
        cin >> s >> t;
        a[s].push_back(t);
        a[t].push_back(s);
    }
    int q;
    cin >> q;
    setNum(a);
    for(int i = 0; i < q; i++){
        int s, t;
        cin >> s >> t;
        if(numbers[s] == numbers[t])cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
