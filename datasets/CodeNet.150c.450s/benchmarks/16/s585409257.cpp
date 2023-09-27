#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
using namespace std;

struct pond {
    int startPos;
    int volume;
};

int main() {
    string st;
    getline(cin, st);
    
    stack<pond> pds;
    stack<int> s;
    
    for(int i = 0; i < st.length(); i++){
        if(st[i] == '\\'){
            s.push(i);
        }else if(st[i] == '/' && s.size()){
            pond pd;
            pd.startPos = s.top(); s.pop();
            pd.volume = i - pd.startPos;
            while(pds.size() && pds.top().startPos > pd.startPos){
                pd.volume += pds.top().volume;
                pds.pop();
            }
            pds.push(pd);
        }
    }
    int tot = 0;
    vector<int> pVs;
    while(pds.size()){
        tot += pds.top().volume;
        pVs.push_back(pds.top().volume);
        pds.pop();
    }
    pVs.push_back((int)pVs.size());
    reverse(pVs.begin(), pVs.end());
    cout << tot << endl;
    for(int i = 0; i < pVs.size(); i++){
        cout << pVs[i] << (i+1 == pVs.size() ? '\n' : ' ');
    }
    return 0;
}