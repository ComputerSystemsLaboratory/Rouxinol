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

long long int inv = 0;

queue<int> merge(queue<int> q1, queue<int> q2){
    queue<int> ma;
    while(q1.size() || q2.size()){
        if(!q2.size() || (q1.size() && q1.front() < q2.front())){
            ma.push(q1.front());
            q1.pop();
        }else{
            ma.push(q2.front());
            q2.pop();
            inv += q1.size();
        }
    }
    return ma;
}
queue<int> sort(queue<int> q){
    queue<int> nq;
    while(q.size() - nq.size() > 1){
        nq.push(q.front());
        q.pop();
    }
    if(!nq.size()) return q;
    return merge(sort(nq), sort(q));
}

int main() {
    int n;
    scanf("%d", &n);
    
    queue<int> q;
    while(n--){
        int i;
        scanf("%d", &i);
        q.push(i);
    }
    
    sort(q);
    printf("%lld\n", inv);
    
    return 0;
}