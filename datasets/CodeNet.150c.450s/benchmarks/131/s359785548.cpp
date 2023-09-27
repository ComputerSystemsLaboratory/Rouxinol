#include <iostream>
#include <cmath>
using namespace std;

int max_rotate(int b, int m);
int min_rotate(int b, int m);

int main(){
	
	int i,j,l;
	int a[22];
	while(1){
		cin >> a[0] >> l;
		if(a[0] == 0 && l == 0){
			break;
		}
		for(i=0;i<21;i++){
			for(j=0;j<i;j++){
				if(a[j] == a[i] && ( j != i )){
					break;
				}
			}
			if(a[j] == a[i] && ( j != i )){
				break;
			}
			a[i+1] = max_rotate(a[i],l) - min_rotate(a[i],l);
		}
		if(i == 0){
			i++;
		}
		cout << j << " " << a[i] << " " << (i - j) <<endl;
	}
	
	return 0;
}

int max_rotate(int b, int m){
	int num[6];
	int tmp;
	int ret = 0;
	int i;
	for(int i=m-1;i>=0;i--){
		tmp = (int)pow(10,i);
		num[i] = b / tmp;
		b %= tmp;
	}

	//sort num[]
	for(i=0;i<m-1;i++){
		for(int j=m-1;j>i;j--){
			if(num[j] < num[j-1]){	//the only difference between max_ & min_
				tmp = num[j];
				num[j] = num[j-1];
				num[j-1] = tmp;
			}
		}
		ret += num[i] * (int)pow(10,i);
	}
	ret += num[i] * (int)pow(10,i);
	return ret;
}

int min_rotate(int b, int m){
	int num[6];
	int tmp;
	int ret = 0;
	int i;
	for(int i=m-1;i>=0;i--){
		tmp = (int)pow(10,i);
		num[i] = b / tmp;
		b %= tmp;
	}

	//sort num[]
	for(i=0;i<m-1;i++){
		for(int j=m-1;j>i;j--){
			if(num[j] > num[j-1]){	//the only difference between max_ & min_
				tmp = num[j];
				num[j] = num[j-1];
				num[j-1] = tmp;
			}
		}
		ret += num[i] * (int)pow(10,i);
	}
	ret += num[i] * (int)pow(10,i);
	return ret;
}