#include <bits/stdc++.h>
using namespace std;

struct T{
    T *child[4];
    bool value;
    T():child{}, value(false){}
    static int toi(char c){return c=='A'?0:c=='C'?1:c=='G'?2:3;}
    void insert(char *s){
        if(*s){
            if(!child[toi(*s)]){
                child[toi(*s)] = new T();
            }
            child[toi(*s)]->insert(s+1);
        }else{
            value = true;
        }
    }
    bool find(char *s){
        if(*s == '\0')
            return value;
        if(child[toi(*s)])
            return child[toi(*s)]->find(s+1);
        else
            return false;
    }
};

int n;
char cmd[7];
char str[13];

int main() {
    T root;

    scanf("%d", &n);
    while(n--){
        scanf("%s%s", cmd, str);
        if(cmd[0] == 'i'){
            root.insert(str);
        }else{
            printf("%s\n", root.find(str) ? "yes" : "no");
        }
    }
}