#include <iostream>
#include <vector>
using namespace std;

struct node {
    int to;
    node *next;
};

node *adj[100000], fm[200000];
int g[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, i;
    cin>>n>>m;
    m+=m;
    int s, t;
    i=0;
    while(i<m) {
        cin>>s>>t;
        fm[i].to=t;
        fm[i].next=adj[s];
        adj[s]=&fm[i];
        i++;
        fm[i].to=s;
        fm[i].next=adj[t];
        adj[t]=&fm[i];
        i++;
    }
    int group=1;
    vector<int> st;
    st.reserve(n);
    for(i=0; i<n; i++) {
        if(g[i]) continue;
        g[i]=group;
        st.push_back(i);
        while(!st.empty()) {
            node *p=adj[st.back()];
            g[st.back()]=group;
            st.pop_back();
            while(p) {
                if(g[p->to]==0) st.push_back(p->to);
                p=p->next;
            }
        }
        group++;
    }
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>s>>t;
        if(g[s]==g[t]) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}