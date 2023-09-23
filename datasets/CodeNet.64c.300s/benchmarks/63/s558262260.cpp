#include<iostream>
#include<stdio.h>
using namespace std;
int yue(int a,int b){
	int min;
	int max;
	if(a==0||b==0){
		return 0;
	}else{
		if(a<b){
			min=a;max=b;
		}else{
			min=b;max=a;
		}
		int shang=max-min;
		while(shang!=min){
			if(shang<min){
				max=min;
				min=shang;
			}else{
				max=shang;
				min=min;
			}
			shang=max-min;
		}
		return shang;
	}
}
int bei(int a,int b){
	int min;
	int max;
	if(a==0||b==0){
		return 0;
	}else{
		if(a<b){
			min=a;max=b;
		}else{
			min=b;max=a;
		}
		int yu=max%min;
		int beishu=1;
		int mmax=max;
		while(yu!=0){
			beishu++;
			max=mmax*beishu;
			yu=max%min;
		}
		return max;
	}
}

long yue2(long a,long b){
	if(a==0||b==0){
		return 0;
	}else{
		long r=a%b;
		while(r!=0){
			a=b;
			b=r;
			r=a%b;
		}
		return b;
	}
}

int main(){
long a,b;
	while(scanf("%ld%ld",&a,&b)!=EOF){
		long y=yue2(a,b);
		printf("%ld %ld\n",y,bei(a,b));
	}
	return 0;
}