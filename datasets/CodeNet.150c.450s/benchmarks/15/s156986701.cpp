#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    scanf("%d", &n);
    vector<int> S(n);
    for(auto it=S.begin(); it!=S.end(); it++){
        scanf("%d", &(*it));
    }
    S.push_back(-1);
    scanf("%d", &q);
    int sum=0;
    for(int i=0; i<q; i++){
        int qq;
        scanf("%d", &qq);
        *S.end()=qq;
        auto it=S.begin();
        for(; *it!=qq; it++){
        }
        sum+=it==S.end() ? 0 : 1;
    }
    printf("%d\n", sum);
    return 0;
}