#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 0x3f3f3f3f
#define NIL (-1)
//#define M 1000003
#define M 1046527
using namespace std;
int T[M+1];
void trans(char *s){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'A') s[i] = '4';
        else if(s[i] == 'C') s[i] = '1';
        else if(s[i] == 'G') s[i] = '2';
        else if(s[i] == 'T') s[i] = '3';
    }
}
int stringToInt(char s[]){
    int t = 0;
    int p = 1;
    for(int i = strlen(s)-1; i >= 0; i--){
        t += (s[i]-'0')*p;
        p *= 5;
    }
    return t;
}
int h1(int a){
    return (int)(a % M);
}
int h2(int a){
    return 1+(int)(a % (M-1));
}
int h(int a, int i){
    return (h1(a) + i * h2(a))%M;
}
 
void insert(int c){
    int i = 0;
    while(true){
        int temp = h(c, i);
        if(T[temp] == NIL){
            T[temp] = c;
            return ;
        }
        else{
            i++;
        }
    }
}
int find(int d){
    int i = 0;
    while(true){
        int temp = h(d, i);
        if(T[temp] == NIL){
            return -1;
        }
        else if(T[temp] == d){
            return 1;
        }
        else{
            i++;
            if(i >= M) return -1;
        }
    }
}
int main(){
    for(int i = 0; i < M; i++) T[i] = NIL;
 
    int n;
    scanf("%d", &n);
    while(n--){
        char a[10], b[14];
        scanf("%s %s", a, b);
        if(a[0] == 'i'){
            trans(b);
            int c = stringToInt(b);
            insert(c);
        }
        else{
            trans(b);
            int d = stringToInt(b);
            if(find(d) != -1){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
    }
 
    return 0;
}
