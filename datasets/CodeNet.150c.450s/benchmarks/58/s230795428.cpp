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

stack<int> st;

char s[10000],t[20];

int main(void){
    int k = 0,l,a,b;
    fgets(s,10000,stdin);
    while(1){
        l = k;
        while(s[k] != ' ' && s[k] != '\0'){
            t[k - l] = s[k];
            k++;
        }

        t[k - l] = '\0';
        if(s[l] >= '0' && s[l] <= '9')
            st.push(atoi(&s[l]));
        else{
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            if(s[l] == '+')
                st.push(b + a);
            else if(s[l] == '-')
                st.push(b - a);
            else if(s[l] == '*')
                st.push(b * a);
            else if(s[l] == '/')
                st.push(b / a);
        }

        if(s[k] == '\0')
            break;
        k++;
    }
    printf("%d\n",st.top());
    return 0;
}