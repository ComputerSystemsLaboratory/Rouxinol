#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int root[10005];
int findR(int a){
    if(root[a] != a)
        root[a] = findR(root[a]);
    return root[a];
}
class edge{
public:
    int sp, ep, w;
    edge(){}
};
bool cmp(const edge& A, const edge& B){
    return A.w < B.w;
}
vector<edge> vec;

int main(){
    int v, e;
    scanf("%d%d", &v, &e);
    vec.resize(e);
    for(int i = 0; i < e; ++i)
        scanf("%d%d%d", &vec[i].sp, &vec[i].ep, &vec[i].w);
    sort(vec.begin(), vec.end(), cmp);
    int sum = 0, cnt = 0;
    for(int i = 0; i < v; ++i)
        root[i] = i;
    for(int i = 0; i < e && cnt < v-1; ++i){
        int sp = vec[i].sp, ep = vec[i].ep, w = vec[i].w;
        int rSP = findR(sp), rEP = findR(ep);
        if(rSP != rEP){
            sum+=w;
            root[rEP] = rSP;
            cnt++;
        }
    }
    printf("%d\n", sum);
    return 0;
}