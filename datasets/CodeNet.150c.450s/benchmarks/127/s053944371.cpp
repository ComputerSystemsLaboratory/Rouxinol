#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    
    scanf("%d", &m);
    
    while (m--){
        set<string> s;
        string st;
        char tmp[128];
        
        scanf("%s", tmp);
        
        st = (string)tmp;
        
        for (int i = 0; i < st.size() - 1; i++){
            string u = st.substr(0, i + 1), v = st.substr(i + 1, st.size() - i - 1);
            string ur = u, vr = v;
            reverse(ur.begin(), ur.end()); reverse(vr.begin(), vr.end());
            s.insert(u + v); s.insert(v + u);
            s.insert(u + vr); s.insert(vr + u);
            s.insert(ur + v); s.insert(v + ur);
            s.insert(ur + vr); s.insert(vr + ur);
        }
        
        printf("%d\n", s.size());
    }
    
    return (0);
}