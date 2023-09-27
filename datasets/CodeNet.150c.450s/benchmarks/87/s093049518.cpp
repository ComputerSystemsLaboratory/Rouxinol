#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int res;
vector<string> input(int n){
    vector<string> res;
    for(int i = 0 ; i < n ; i ++){
        string line;
        for(int j = 0 ; j < 5 ; j ++){
            char c;
            cin>>c;
            line += c;
        }
        res.push_back(line);
        line="";
    }
    return res;
}

pair<string,int> chek(string s){
    int res = 0;
    string nu ="00000";
    // a a a a a 
//    cout<<"che"<<endl<<s<<endl;   
    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4] && s[0] != '0'){
        return make_pair(nu,(s[0] - '0') * 5);
    }
    // a a a a b
    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[0] != '0'){
        return make_pair(nu.substr(0,4)+s.substr(4,1),(s[0] - '0') * 4);
    }
    // b a a a a
    if(s[1] == s[2] && s[2] == s[3] && s[3] == s[4] && s[1] != '0'){
        return make_pair(s.substr(0,1)+nu.substr(0,4),(s[1] - '0') * 4);
    }
    // a a a b c
    if(s[0] == s[1] && s[1] == s[2] && s[0] != '0'){
        return make_pair(nu.substr(0,3)+s.substr(3,2),(s[0] - '0') * 3);
    }
    // b a a a c 
    if(s[1] == s[2] && s[2] == s[3] && s[1] != '0'){
        return make_pair(s.substr(0,1)+nu.substr(0,3)+s.substr(4,1),(s[1] - '0') * 3);
    }
    // b c a a a
    if(s[2] == s[3] && s[3] == s[4] && s[2] != '0'){
        return make_pair(s.substr(0,2)+nu.substr(0,3),(s[2] - '0') * 3);
    }
    return make_pair(s,0);
}
vector<string> move(vector<string> line){
    for(int i = line.size() - 2 ; i >= 0 ; i --){
        for(int j = 0 ; j < 5 ; j ++){
            if(line[i+1][j] == '0'){
                line[i+1][j] = line[i][j];
                line[i][j] = '0';
            }
        }
    }
    return line;
}
int main(void){
    int n;
    while(cin>>n,n){
        res = 0;
        vector<string> in = input(n);
//        cout<<in.size()<<endl;
//        for(int i = 0 ; i < in.size(); i ++)cout<<in[i]<<endl;
        if(in.size() == 1){
            pair<string,int> line = chek(in[0]);
            cout<<line.second<<endl;
        }else{
            bool con = true;
            int ll=0;
            while(con){
//                cout<<endl;
                con = false;
                for(int i = 0 ; i < in.size() ; i ++){
                    pair<string,int> line = chek(in[i]);
                    in[i] = line.first;
                    res += line.second;
                    if(line.second)con=true;
                    in = move(in);
                }
//            for(int i = 0 ; i < in.size() ; i ++)cout<<in[i]<<endl;
            }
//            for(int i = 0 ; i < in.size() ; i ++)cout<<in[i]<<endl;
            cout<<res<<endl;
        }
    }
}