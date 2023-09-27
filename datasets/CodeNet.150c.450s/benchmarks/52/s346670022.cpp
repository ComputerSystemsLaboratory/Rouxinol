#include<cstdio>
#include<stack>

using namespace std;

int main()
{
    stack<int> track;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n) track.push(n);
        else
        {
            printf("%d\n",track.top());
            track.pop();
        }
    }
    return 0;
}