#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

#define BUF_SIZE 20001

int main(void){
    char buf[BUF_SIZE];
    fgets(buf, BUF_SIZE, stdin);
    int A = 0;
    stack<int> s1;
    stack<pair<int, int> > s2;
    for(int i = 0; buf[i] != '\0'; ++i){
        if(buf[i] == '\\')
            s1.push(i);
        else if(buf[i] == '/' && s1.size() > 0){
            int j = s1.top();
            s1.pop();
            int a = i - j;
            A += a;
            while(s2.size() > 0 && s2.top().first > j){
                a += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j, a));
        }
    }
    int k = s2.size();
    printf("%d\n%d", A, k);
    vector<int> L(k, 0);
    for(int i = k - 1; i >= 0; --i){
        L[i] = s2.top().second;
        s2.pop();
    }
    for(int i = 0; i < k; ++i){
        if(i == 0)
            printf(" ");
        printf("%d", L[i]);
        if(i != k - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}