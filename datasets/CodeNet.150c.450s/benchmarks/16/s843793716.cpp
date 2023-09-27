#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
int main(){
    string str;
    cin >> str;

    int sum=0;

    stack<int> slopes;
    stack<pair<int,int> > lakes; //first:位置,//second:面積

    for(int i=0;i<str.length();++i){
        if(str[i]=='\\'){
            slopes.push(i);
        }else if(str[i]=='/' && !slopes.empty()){
            int s=slopes.top();slopes.pop();
            lakes.push(pair<int,int>(s,i-s));
            sum+=i-s;
        }
    }

    //包含関係にある水たまりのうち，小さい方の方が後から出てくる
    vector<bool> islake(str.length(),false); //湖かどうか記憶しておく
    int deeper=0;
    stack<int> output;
    while(!lakes.empty()){
        if(islake[lakes.top().first]){
            output.top()+=lakes.top().second;
        }else{
            for(int i=lakes.top().first;i<lakes.top().first+lakes.top().second;++i){
                islake[i]=true;
            }
            output.push(lakes.top().second);
        }
        lakes.pop();
    }

    //出力するだけ
    cout << sum << endl;
    cout << output.size();
    while(!output.empty()){
        cout << ' ' << output.top();
        output.pop();
    }
    cout << endl;
}
