#include<cstdio>
#include<stack>
using namespace std;
int main(){
    int a;
    stack<int> st;
    while(~scanf("%d",&a)){
        if(a) st.push(a);
        else{
            printf("%d\n",st.top());
            st.pop();
        }
    }
}