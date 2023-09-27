#include <cstdio>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int,int> rect_t;
vector<rect_t> ordering;

int comp(const rect_t& a,const rect_t& b){
    return rect_t(a.first*a.first+a.second*a.second,a.first)<rect_t(b.first*b.first+b.second*b.second,b.first);
}

int main(){

    for(int i=1;i<=150;i++)
        for(int j=i+1;j<=150;j++)
            ordering.push_back(rect_t(i,j));

    sort(ordering.begin(),ordering.end(),comp);
    int h,w;
    while(scanf("%d%d",&h,&w)&&(h&&w)){
        auto ans=*(lower_bound(ordering.begin(),ordering.end(),rect_t(h,w),comp)+1);
        printf("%d %d\n",ans.first,ans.second);
    }

    return 0;
}
