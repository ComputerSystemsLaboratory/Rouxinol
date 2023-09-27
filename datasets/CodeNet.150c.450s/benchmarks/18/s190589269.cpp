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
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int money = 100000;
    for(int i = 0; i < n; i++){
        money = money * 105 / 100;
        if(money % 1000 > 0){
            money -= money % 1000;
            money += 1000;
        }
    }
    cout << money << endl;
    return 0;
}