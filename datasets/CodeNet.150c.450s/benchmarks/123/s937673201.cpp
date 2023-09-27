#include<cstdio>
#include<cmath>
bool isp(int nu){
	int i = 1;
	if(nu == 1) return false;
	else if(nu == 2) return 1;
	int sqr = sqrt(nu) + 1;
	for(i = 2;i <= sqr;i++) if(nu % i == 0) return false;
	return true;
}
int main(){
    short sum=0, n;
    scanf("%d", &n);
    for(;n>0;n--){
        int temp;
        scanf("%d", &temp);
        if(isp(temp)) sum++;
    }
    printf("%d\n", sum);
}

