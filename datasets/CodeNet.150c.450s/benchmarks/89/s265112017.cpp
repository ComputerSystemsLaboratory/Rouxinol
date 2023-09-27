#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b,n,count,ans,num,flag;
	while(1){
		count = 0;
		cin >> a >> b >> n;
		if(a == 0 && b == 0)break;
		num = a;
		while(1){
			flag = 0;
			if(count == n)break;
			if(num == 1){
				num += b;
				continue;
			}
			else if(num == 2){
				count++;
				ans = 2;
			}
			else if(num == 3){
				count++;
				ans = 3;
			}
			else if(num % 2 == 1){
				for(int i = 3;i <= sqrt(num);i+=2){
					if(num % i == 0)flag = 1;
				}
				if(flag == 0){
					count++;
					ans = num;
				}
			}
			num += b;
		}
		cout << ans <<endl;
	}
	return 0;
}