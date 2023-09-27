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


int main() {
    
    long n;
    cin >> n;
    string s,t;
    unordered_map <string, int> dic;
    for (int i=0;i<n;i++){
        cin >> s >> t;
        if(s == "insert"){
            dic[t] = 1;
        }else{
            if(dic[t] == 1){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
}
