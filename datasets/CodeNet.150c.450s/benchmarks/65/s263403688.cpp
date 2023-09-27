#include<string>
#include<cctype>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
#define inf 0x3f3f3f3f
const int maxn = 36 + 8;
/*template<class T>
void swap(T &a,T &b)
{
    T c = a;
    a = b;
    b = c;
}
*/
struct node{
    char c;
    int n;
};

node x[maxn],y[maxn],z[maxn];

int n,minj;
void bubbleSort(node y[])
{
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= i+1; --j){
            if(y[j].n < y[j-1].n){
                swap(y[j],y[j-1]);
            }
        }
    }
    return;
}

void  selectSort(node z[])
{
    for(int i = 0; i < n-1; ++i){
        minj = i;
        for(int j = i; j < n; ++j){
            if(z[j].n < z[minj].n){
                minj = j;
            }
        }
        swap(z[minj],z[i]);
    }
    return;
}

void see(node m[])
{
    for(int i = 0; i < n; ++i){
        printf("%s%c%d",i == 0 ? "" : " ",m[i].c,m[i].n);
    }
    printf("\n");
}

bool judge(node a[],node b[])
{
    for(int i = 0; i < n ;++i){
        if(a[i].c != b[i].c ){
            return false;
        }
    }
    return true;
}
int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; ++i){
        char ch = (char)getchar();
        scanf("%c%d",&x[i].c, &x[i].n);
        y[i].c = z[i].c = x[i].c;
        y[i].n = z[i].n = x[i].n;
    }
    bubbleSort(y);
    see(y);
    cout << "Stable" << endl;
    selectSort(z);
    see(z);
    printf("%s\n",judge(y,z) == 0 ? "Not stable" : "Stable");
    return 0;
}