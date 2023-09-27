#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <regex>

using namespace std;

string uniteBlanks( string t )
{
    int i=0;
    for(i=t.size()-1;i>0;i--){
        if(t[i-1]== ' ' && t[i]==' ')t.erase(t.begin()+i);
    }
    if(t[0] == ' ')t.erase(t.begin());
    return t;
}

int main() {
    string w, t, t_tmp;
    int i, j, count, ix;
    vector<string> list;
    string item;

    getline(cin, w);
    std::transform(w.begin(), w.end(), w.begin(), ::toupper);
    count = 0;

    getline(cin, t_tmp);
    t = uniteBlanks(t_tmp);

while(t!="END_OF_TEXT"){
    std::transform(t.begin(), t.end(), t.begin(), ::toupper);

    stringstream ss(t);
    while (getline(ss, item, ' ') && !item.empty()) {
        list.push_back(item);
    }

    for(i=0;i != list.size();i++){
        if(w == list[i]){
            count++;
        }
    }

    list.clear();
    getline(cin, t_tmp);
    t = uniteBlanks(t_tmp);
}
cout << count << endl;
    return 0;
}

