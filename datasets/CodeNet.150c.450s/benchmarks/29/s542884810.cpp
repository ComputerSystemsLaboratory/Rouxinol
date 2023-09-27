#include <iostream>
#include <deque>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void){
    int N;
    cin >> N;
    
    deque<int> d;
    rep(i, N){
        char s[20];
        int x;
        scanf("%s %d\n", s, &x);
        if(*s == 'i') d.push_front(x);
        else if(s[6] == 'F') d.pop_front();
        else if(s[6] == 'L') d.pop_back();
        else{
            for(int j = 0, len = d.size(); j < len; ++j){
                if(d[j] == x){
                    d.erase(d.begin() + j);
                    break;
                }
            }
        }
    }
    
    int i;
    int len = d.size() - 1;
    for(i = 0; i < len; ++i)
        printf("%d ", d[i]);    
    printf("%d\n", d[i]); 
    return 0;
}
