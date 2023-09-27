#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> set;
    string str;
    int mode = 0;
    int max_length = 0;

    while(cin >> str){
        if(set.find(str) != set.end()){
            set[str]++;
        }else{
            set.insert(pair<string, int>(str, 1));
        }
    }

    map<string, int>::iterator it = set.begin();
    map<string, int>::iterator mode_cursor = set.begin();
    map<string, int>::iterator max_cursor = set.begin();

    while(it != set.end()){
        if(mode < it->second){
            mode = it->second;
            mode_cursor = it;
        }
        if(max_length < it->first.size()){
            max_length = it->first.size();
            max_cursor = it;
        }
        it++;
    }

    cout << mode_cursor->first << " " << max_cursor->first << endl;

    return 0;
}