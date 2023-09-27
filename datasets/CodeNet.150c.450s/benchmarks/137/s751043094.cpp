#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    map<string, bool> map;
    while(n--){
        char s[8], d[16];
        scanf("%s %s", s, d);
        string ds(d);
        
        if(s[0] == 'i'){
            map[ds] = true;
        }else if(map[ds]){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    
    return 0;
}