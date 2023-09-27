#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
typedef pair<int,int> P;

stack<int> down;
stack<P> area;
int tot;
void get_input() {

}

void solve() {
    char c;
    int num=0;
    while(scanf("%c",&c)!=EOF) {
        if(c=='\\') {
            down.push(num);
        } else if(c=='/') {
            if(!down.empty()) {
                int t1=down.top();
                down.pop();
                int t2=num-t1;
                tot+=t2;
                while(!area.empty()) {
                    P t=area.top();
                    if(t.first>t1) {
                        area.pop();
                        t2+=t.second;
                    } else {
                        break;
                    }
                }
                area.push(make_pair(t1,t2));
            }
        }
        num++;
    }
}

void display_output() {
    printf("%d\n%d",tot,area.size());
    vector<int> ans;
    while(!area.empty()) {
        ans.push_back(area.top().second);
        area.pop();
    }
    for(int i=ans.size()-1;i>=0;i--) {
        printf(" %d",ans[i]);
    }
    printf("\n");

}

int main() {
#ifdef debug
    freopen("in.txt","r",stdin);
#endif
    get_input();
    solve();
    display_output();
}