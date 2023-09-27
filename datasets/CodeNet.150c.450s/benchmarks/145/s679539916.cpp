#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    map<string,int> word_map;
    map<string,int>::iterator it;
    string s,freq_word,long_word;
    int freq_count=0;
    
    //cout << "???????????\?????????????????????" << endl;
    while (cin >> s) {
        it = word_map.find(s);
        if(it == word_map.end()){
            word_map.insert(map<string,int>::value_type(s,1));
            it = word_map.find(s);
        }
        else{
            (*it).second += 1;
        }
        //??????????????????
        if ((*it).second > freq_count) {
            freq_count = (*it).second;
            freq_word = s;
        }
        //?????°????¢????
        if (s.size() > long_word.size())
            long_word = s;
    
    }
    
    cout << freq_word << " " << long_word << endl;
}