#include<bits/stdc++.h>
const static int INF = 1001001003;

std::vector<int> a;

int getTrackNum(int mid){
    int track_num, cnt, cur;
    cnt = 1;
    cur = 0;
    for(int i = 0; i < a.size(); i++){
	if(mid < a[i]){
	    return INF;
	}
	else if(cur + a[i] <= mid){
	    cur += a[i];
	}else{
	    cnt++;
	    cur = a[i];
	}
    }
    return cnt;
}

int main(void){
    int left, right, mid, track_num, n, k, ans;
    std::cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++){
	std::cin >> a[i];
    }

    left = 0;
    right = 1001001002;
    while(left < right){
	mid = (left + right) / 2;
	track_num = getTrackNum(mid);
	if(track_num <= k){
	    right = mid;
	}else{
	    left = mid + 1;
	}
	
    }

    std::cout << right << std::endl;

    return 0;
}

