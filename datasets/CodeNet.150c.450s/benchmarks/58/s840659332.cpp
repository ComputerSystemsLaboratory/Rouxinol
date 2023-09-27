#include <cstdio>
#include <cstdlib>
#include <stack>

int main(){
    std::stack<int> st;
    char s[10];
    int op1,op2;

    while(scanf("%s",s)!=EOF){
        switch(s[0]){
        case '+':
            op2 = st.top();
            st.pop();
            op1 = st.top();
            st.pop();
            st.push(op1+op2);
            break;
        case '-':
            op2 = st.top();
            st.pop();
            op1 = st.top();
            st.pop();
            st.push(op1-op2);
            break;
        case '*':
            op2 = st.top();
            st.pop();
            op1 = st.top();
            st.pop();
            st.push(op1*op2);
            break;
        default:
            st.push(atoi(s));
            break;
        }
    }

    printf("%d\n",st.top());

    return 0;
}

