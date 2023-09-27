#include <iostream>
#include <vector>
#include <stdio.h>

#define TIME 24 * 60 * 60

using namespace std;

int main(){
	int n;
	
	while(1){
		cin >> n;
		if(n == 0)
			break;
		
		int h_dep, m_dep, s_dep, h_arr, m_arr, s_arr;
		vector <int> dep(n), arr(n);
		for(int i = 0; i < n; i++){
			scanf("%d:%d:%d %d:%d:%d", &h_dep, &m_dep, &s_dep, &h_arr, &m_arr, &s_arr);
			dep[i] = s_dep + m_dep * 60 + h_dep * 60 * 60;
			arr[i] = s_arr + m_arr * 60 + h_arr * 60 * 60;
		}
		vector <int> train(TIME, 0);
		for(int i = 0; i < n; i++){
			train[dep[i]]++;
			train[arr[i]]--;
		}
		int max = 0;
		for(int i = 1; i < TIME; i++){
			train[i] += train[i - 1];
			if(train[i] > max)
				max = train[i];
		}
		
		cout << max << endl;
	}
	
	return 0;
}