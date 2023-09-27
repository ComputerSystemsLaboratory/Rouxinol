#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<stack>

using namespace std;

void split(string s, vector<string> &v){
    int pre_pos = 0;
    while(pre_pos < s.size()){
        int pos = s.find(" ", pre_pos);
        if(pos == string::npos){
            v.push_back(s.substr(pre_pos));
            break;
        }
        v.push_back(s.substr(pre_pos, pos-pre_pos));
        pre_pos = pos + 1;
    }
}

int calc(int x, int y, string ope){
    if(ope.compare("+") == 0)
        return x + y;
    else if(ope.compare("-") == 0)
        return x - y;
    else if(ope.compare("*") == 0)
        return x * y;
    else
        throw "operation err";
}

int rpn(vector<string> &v){
    set<string> ope;
    ope.insert("+");
    ope.insert("-");
    ope.insert("*");
    int ans;
    stack<int> st;
    for(int i = 0; i < v.size(); i++){
        if(ope.find(v[i]) != ope.end()){
            int y = st.top(); st.pop();
            int x = st.top(); st.pop();
            ans = calc(x, y, v[i]);
            st.push(ans);
        }else{
            st.push(stoi(v[i]));
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    vector<string> iv;
    split(s, iv);
    cout << rpn(iv) << endl;
    return 0;
}