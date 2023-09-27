#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        list<int> li;
        list<int>::iterator it;
            char str[20];
            int inp;
        while(n--){
            scanf("%s", str);
            if(str[0] == 'i'){
                scanf("%d", &inp);
                li.push_front(inp);
            }else if(str[6] == 'F'){
                li.pop_front();
            }else if(str[6] == 'L'){
                li.pop_back();
            }else if(str[0] == 'd'){
                scanf("%d", &inp);
                for(it = li.begin(); it != li.end(); it++){
                    if(*it == inp){
                         li.erase(it);
                         break;
                    }
                }
            }
        }
        for(it = li.begin(); it != li.end(); it++){
            if(it == li.begin()) cout << *it;
            else cout << ' ' << *it;
        }
        cout << endl;
    }
}