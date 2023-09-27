// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int N; cin >> N;
    for(int i=0; i<N; ++i){
        set<string> se;
        string str; cin >> str;
        for(int j=0; j<str.size()-1; ++j){
            string head, tail;
            head = str.substr(0, j+1);
            tail = str.substr(j+1, str.size()-j);
            string tmp; tmp = head+tail;
            se.insert(tmp);
            tmp = tail+head;
            se.insert(tmp);
            
            reverse(head.begin(), head.end());
            tmp = head+tail;
            se.insert(tmp);
            tmp = tail+head;
            se.insert(tmp);
            
            reverse(head.begin(), head.end());
            reverse(tail.begin(), tail.end());
            tmp = head+tail;
            se.insert(tmp);
            tmp = tail+head;
            se.insert(tmp);
            
            reverse(head.begin(), head.end());
            tmp = head+tail;
            se.insert(tmp);
            tmp = tail+head;
            se.insert(tmp);
        }
        cout << se.size() << endl;
    }
    
}

