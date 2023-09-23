#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; ++i) {
    	int s[3]; scanf("%d %d %d", &s[0], &s[1], &s[2]);
    	
    	sort(s, s + 3);
    	
    	int a=s[0], b=s[1], c=s[2];
    	
    	if (c*c == (a*a)+(b*b)) puts("YES");
    	else puts("NO");
    }
}