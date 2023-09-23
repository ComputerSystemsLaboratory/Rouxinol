#include <stdio.h>


using namespace std;

typedef long long ll;

int gcd(int x,int y) {
        return y > 0 ? gcd(y,x % y) : x;
}
int main() {

        int a,b;
        while(~scanf("%d%d",&a,&b)) {
            printf("%d ",gcd(a,b));
            printf("%lld\n",(ll)a / gcd(a,b) * b);
        }

}