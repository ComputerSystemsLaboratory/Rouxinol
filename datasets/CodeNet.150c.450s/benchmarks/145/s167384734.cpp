#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string, int> data;
    string mxlen, mst, str;
    while(cin >> str){
        data[str]++;
        if(data[str] > data[mst]){
            mst = str;
        }
        if(str.size() > mxlen.size()){
            mxlen = str;
        }
    }
    cout << mst << ' ' << mxlen << endl;
    return 0;
}