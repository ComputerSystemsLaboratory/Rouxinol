#include <iostream>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

vector<string> split(const string &str, char delim){
    vector<string> v;
    string buffer;
    stringstream ss(str);
    while(getline(ss, buffer, delim)) v.push_back(buffer);
    return v;
}

string getLine(){
    string str;
    getline(cin, str);
    return str;
}

template<typename T, typename R>
vector<R> v_map(vector<T> xs, R(*fp)(T)){
    vector<R> ys;
    for(T x : xs) ys.push_back(fp(x));
    return ys;   
}

int compare(int a, int b){
    if(a == b)     return 0;
    else if(a < b) return -1;
    else           return 1;
}

int main(void){
    vector<int> v = v_map(split(getLine(), ' '), +[](string x){ return stoi(x); });
    unordered_map<int, string> mp = { {-1, "<"}, {0, "=="}, {1, ">"}, };
    cout << "a " + mp[compare(v[0], v[1])] + " b" << endl;
    return 0;
}