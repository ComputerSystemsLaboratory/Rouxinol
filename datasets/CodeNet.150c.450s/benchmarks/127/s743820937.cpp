#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>
using namespace std;
const int MAXN = (int) 5e5 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int N;
string s;
set<string> st;

void work(){
    scanf("%d",&N);
    while(N--){
        cin>>s;
        st.clear();
        int len=s.size();
        for(int i=0;i<=len;i++){
            string pre1,pre2;
            string suf1,suf2;
            for(int j=0;j<i;j++) pre1+=s[j],pre2+=s[i-j-1];
            for(int j=0;i+j<len;j++) suf1+=s[i+j],suf2+=s[len-j-1];
//            cout<<"-"+pre1+"-"<<" "<<"-"+pre2+"-"<<" "<<"-"+suf1+"-"<<" "<<"-"+suf2+"-"<<endl;
            st.insert(pre1+suf1);
            st.insert(pre1+suf2);
            st.insert(pre2+suf1);
            st.insert(pre2+suf2);
            st.insert(suf1+pre1);
            st.insert(suf1+pre2);
            st.insert(suf2+pre1);
            st.insert(suf2+pre2);
        }
        printf("%d\n",st.size());
    }
}

int main(){
#ifdef NNever
//    freopen("data.in","r",stdin);
//    freopen("out.txt","w",stdout);
#endif // NNever
    work();
    return 0;
}


