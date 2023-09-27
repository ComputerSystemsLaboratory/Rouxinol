#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
int a,b;
while(scanf("%d %d",&a,&b)!=EOF){
    long long int z=(long long)a*b;
    if(a<b)swap(a,b);
    while(b){
        int d=b;
        b=a%b;
        a=d;
    }
    printf("%d %lld\n",a,z/a);
}


return 0;
}