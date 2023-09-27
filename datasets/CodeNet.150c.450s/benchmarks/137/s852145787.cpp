#include <cstdio>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    unordered_map<string, int> mp;
    for(int i=0; i<n; i++){
        char buf[16];
        scanf("%s", buf);
        if(*buf=='i'){
            scanf("%s", buf);
            mp[string(buf)]=1;
        } else{
            scanf("%s", buf);
            if(mp.find(string(buf))!=mp.end()){
                printf("yes\n");
            } else{
                printf("no\n");
            }
        }
    }
    return 0;
}