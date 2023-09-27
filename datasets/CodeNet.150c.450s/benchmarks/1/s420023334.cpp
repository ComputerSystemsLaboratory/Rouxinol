#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

const int MAXN=1e5+10;

int N;
pair<int,int> elements[MAXN];//value index
int BIT[MAXN];

int len(int i){
    return i&(-i);
}

int query(int prefixIndex){
    if (prefixIndex<1) return 0;

    return max(query(prefixIndex-len(prefixIndex)),BIT[prefixIndex]);
}

void updateTo(int i,int val){
    if (i>N) return;
    BIT[i]=max(BIT[i],val);
    updateTo(i+len(i),val);
}

int main(){
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int temp;
        scanf("%d",&temp);
        elements[i].first=temp;
        elements[i].second=i;
    }

    sort(elements+1,elements+N+1);

    int cur=1;
    while(cur<=N){
        int head=cur;
        vector<int> newvalues;
        while(cur<=N&&elements[cur].first==elements[head].first) cur++;

        for(int index=head;index<cur;index++){
            int pre=elements[index].second-1;
            int temp=query(pre);
            newvalues.push_back(temp+1);
        }

        for(int index=cur-1;index>=head;index--){
            updateTo(elements[index].second,newvalues.back());
            newvalues.pop_back();
        }
    }

    printf("%d\n",query(N));

    return 0;
}
