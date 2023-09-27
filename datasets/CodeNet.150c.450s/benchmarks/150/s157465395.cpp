#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <list>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    map<int, int> cnt;
    while(n--){
        int key;
        scanf("%d", &key);
        cnt[key]++;
    }
    
    queue<int> sorted;
    map<int, int>::iterator it = cnt.begin();
    do{
        while((*it).second--){
            sorted.push((*it).first);
        }
    }while(++it != cnt.end());
    
    while(sorted.size()){
        printf("%d%c", sorted.front(), sorted.size() == 1 ? '\n' : ' ');
        sorted.pop();
    }
    return 0;
}