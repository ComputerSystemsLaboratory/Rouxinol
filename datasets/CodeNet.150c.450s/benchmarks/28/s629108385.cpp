#include <iostream>

using namespace std;

int max(int n, int l[]){
	int ans = -1;
	for (int i=0; i<n; i++){
		if (l[i] > ans){
			ans = l[i];
		}
	}
	return ans;
}

int sum(int n, int l[]){
	int ans = 0;
	for (int i=0; i<n; i++){
		ans += l[i];
	}
	return ans;
}

bool enough(int p, int k, int n, int l[]){
	int tmp = 0;
	int cnt = 0;
	for (int i=0; i<n; i++){
		if (tmp+l[i] > p){
			cnt++;
			tmp = l[i];
		}
		else{
			tmp += l[i];
		}
	}
	return (cnt+1 <= k);
}

int main(){

	int n;
	int k;
	int tmp;
	cin >> n;
	cin >> k;

	int l[n];
	for (int i=0; i<n; i++){
		cin >> tmp;
		l[i] = tmp;
	}

	int left = max(n,l);
	int right = sum(n,l);

	while (left != right){
		tmp = int((left+right)/2);
		if (enough(tmp, k, n, l)){
			right = tmp;
		}
		else{
			left = tmp+1;
		}
	}

	cout << right << endl;



	return 0;
}
