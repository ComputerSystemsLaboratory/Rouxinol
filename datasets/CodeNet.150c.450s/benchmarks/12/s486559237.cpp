#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    auto H=vector<int>(n);
    for(auto it=H.begin(); it!=H.end(); it++){
        scanf("%d", &(*it));
    }
    for(auto it=H.begin(); it!=H.end(); it++){
        int idx=distance(H.begin(), it);
        printf("node %d: key = %d, ", idx+1, *it);
        int parent=(idx-1)/2;
        if(parent>=0 && idx){
            printf("parent key = %d, ", H[parent]);
        }
        int left=(idx+1)*2-1;
        if(left<n){
            printf("left key = %d, ", H[left]);
            int right=(idx+1)*2;
            if(right<n){
                printf("right key = %d, ", H[right]);
            }
        }
        printf("\n");
    }
    return 0;
}