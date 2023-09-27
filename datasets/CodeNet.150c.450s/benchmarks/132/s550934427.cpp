#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int main()
{
    int n, p;
    while(1){
        cin >> n >> p;
        if(n == 0 && p == 0) break;
        int candidate[50] = {0};
        int start = 0;
        int bowlin = p;
        while(1){
            for(int i = 0; i < n; i++){
                candidate[i] += bowlin / n;
                if(i < bowlin % n) candidate[(start + i) % n]++;
            }
            int end = (start + bowlin % n) % n;
            while(candidate[end] == 0) end = (end + 1) % n;
            bowlin = candidate[end];
            candidate[end] = 0;
            start = (end + 1) % n;
            if(candidate[start] == p - 1){
                cout << start << endl;
                break;
            }
        }
    }
   return 0;
}