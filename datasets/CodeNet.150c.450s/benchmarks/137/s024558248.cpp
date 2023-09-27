#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)


set<string> tree;

int main(){
    int n;

    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        string a,b,op = "insert";

        cin>>a>>b;

        if(a == op){
            tree.insert(b);
        }else{
            set<string>::iterator itr;
            itr = tree.find(b);
            if(itr != tree.end())
                printf("yes\n");
            else
                printf("no\n");
        }
    }
}