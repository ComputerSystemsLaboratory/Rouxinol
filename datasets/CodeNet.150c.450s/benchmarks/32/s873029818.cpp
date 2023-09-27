#include<cstdio>
#include<algorithm>
#include<iterator>
#include<vector>

using namespace std;

int main(void) {
    while(1) {
        int m,nmin,nmax;
        vector<int> p;
        scanf("%d%d%d",&m,&nmin,&nmax);
        if(!m) break;

        for(int i=0; i<m; i++) {
            int p_;
            scanf("%d",&p_);
            p.push_back(p_);
        }

        sort(begin(p), end(p));

        int last=p[0];
        int maxgap=-1, res=-1;
        while(1) {
            auto ub = upper_bound(begin(p), end(p), last);
            if(ub == end(p)) break;

            last = *ub;

            if(end(p) - ub > nmax || end(p) - ub < nmin) continue;

            if(maxgap < (*ub - *(ub-1))) {
                maxgap = (*ub - *(ub-1));
                res = end(p)-ub;
            }
            
        }
        printf("%d\n",res);
    }
    return 0;
}