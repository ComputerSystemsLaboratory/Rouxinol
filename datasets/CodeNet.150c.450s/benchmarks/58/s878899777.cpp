#include<string>
#include<cctype>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<queue>
using namespace std;
#define inf 0x3f3f3f3f
typedef long long ll;
const int maxn = 1000 + 8;
int sta[maxn];
char c[100];
int top ;
/*
bool isEmpty(int sta[])
{
    return !top;
}*/

int pop()
{
    top--;
    return sta[top+1];
    /*int x = sta[top];
    top--;
    return x;*/
}
void push(int x)
{
    sta[++top] = x;
    return;
}
void add()
{
    int y = pop();
    int x = pop();
    //cout <<"x + y: " << x + y << endl;
    push(x+y);
    //cout << sta[top] << endl;
}
void subtract()
{
    int y =  pop();
    int x =  pop();
    //cout << "x - y: " <<x - y << endl;
    push(x-y);
    //cout << sta[top] << endl;
}

void multiple()
{
    int y = pop();
    int x = pop();
    //cout <<"x * y: "<< x * y << endl;
    push(x*y);
    //cout << sta[top] << endl;
}
void operate(char s[])
{
    int x = atoi(c);
    push(x);
}
int main()
{
    top = 0;
    while(scanf("%s",c) != EOF)
    {
        if(strcmp(c,"+") == 0){
            add();
        }else if(strcmp(c,"-") == 0){
            subtract();
        }else if(strcmp(c,"*") == 0){
            multiple();
        }else {
            operate(c);
        }

        if(strcmp(c,"#") == 0) break;
    }
    printf("%d\n",pop());
    return 0;
}