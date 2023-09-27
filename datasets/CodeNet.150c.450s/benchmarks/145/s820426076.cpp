#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int max = 0;
    string s,longests,frequents;
    map<string,int> dict;
    while(cin >>s){
        dict[s] +=1;
        if(s.size() >= max){
            longests = s;
            max = s.size();
        }
        if(dict[s] >= dict[frequents]){
            frequents = s;
        }
    }
    cout << frequents << " " << longests << endl;
}