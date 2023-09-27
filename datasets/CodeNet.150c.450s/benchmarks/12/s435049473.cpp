#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i < n; ++i){
        printf("node %d: key = %d, ", i + 1, v[i]);
        if(i != 0){
            printf("parent key = %d, ", v[(i-1)/2]);
        }
        if(2 * i + 1 < n){
            printf("left key = %d, ", v[(2 * i + 1)]);
        }
        
        if(2 * i + 2 < n){
            printf("right key = %d, ", v[(2 * i + 2)]);
        }
        puts("");
    }
    
}