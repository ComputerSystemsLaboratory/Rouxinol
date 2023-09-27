#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


string str(int n, int l){
    string s = to_string(n);
    for(int i = s.length(); i<l; i++){
        s.push_back('0');
    }
    return s;
}

int maxstr(string s){
    sort(s.begin(), s.end(), greater<int>());
    return stoi(s);
}

int minstr(string s){
    sort(s.begin(), s.end());
    return stoi(s);
}

int main(){
    int N, L;

    string s;
    int count, tmp;
    bool endFlag = false;
    map<int, int> cmap;
    while(true){
        cin >> N >> L;
        if(N == 0 && L == 0) break;
        count = 0;
        endFlag = false;
        cmap.clear();

        cmap[N] = count;
        while(!endFlag){
            s = str(N, L);
            tmp = maxstr(s) - minstr(s);
            if(cmap.find(tmp) != cmap.end()){
                count++;
                cout << cmap[tmp] << " " << tmp << " " << count - cmap[tmp] << endl;
                endFlag = true;
            }else {
                cmap[tmp] = ++count;
                N = tmp;
            }
        }
    }
}