#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <unordered_map>

using namespace std;


const long long  MAX = 200000;
int main() {
    

    list <long long> l;
    long n;
    cin >>  n;
    long long x;
    string s;
    for (int i=0;i<n;i++){
        cin >> s;
        if(s == "insert"){
            cin >> x;
            l.push_front(x);
        }else if(s == "deleteFirst"){
            l.pop_front();
        }else if(s == "deleteLast"){
            l.pop_back();
        }else{
            cin >> x;
            list <long long>::iterator p;
            for (p = l.begin();p!=l.end();p++){
                if(*p == x){
                    l.erase(p);
                    break;
                }
            }
        }
    }
    list <long long>::iterator p;
    long i=0;
    for (p=l.begin();p!=l.end();p++){
        if(i++){
            cout << " ";
        }
        cout << *p;
    }
    cout << endl;
}
