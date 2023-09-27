#include <cstdio>
#include <stack>
using namespace std;

int main()
{
        int car;
        stack<int> st;
        while(scanf("%d", &car) != EOF) {
                if(car == 0) {
                        if(!st.empty()) {
                                printf("%d\n",st.top());
                                st.pop();
                        }
                } else {
                        st.push(car);
                }
        }
        return 0;
}