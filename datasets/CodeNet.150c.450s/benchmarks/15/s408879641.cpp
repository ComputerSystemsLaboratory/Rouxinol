#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,n) for(int i=a;i<n;i++)
#define rep(i,n) REP(i,0,n)
int main(void){
	int num_first,num_second;
	int *array_first,*array_second;
	int cnt =  0;
	int *array_temp;
	cin  >> num_first ;
	array_first = new int [num_first];
	rep(i,num_first){
		cin >> array_first[i];
	}
	cin >> num_second;
	array_second = new int [num_second];
	array_temp = new int [num_second];
	rep(i,num_second){
		cin >> array_second[i];
	}
	int cnt_temp = 0;
	sort(array_second,array_second + num_second);
	sort(array_first,array_first + num_first);
	rep(j,num_second){
		rep(i,num_first){
			if(array_first[i] == array_second[j]){ cnt++;break; }
		}
	}
//	rep(i,cnt_temp){
//		rep(j,cnt_temp){
//			if(array_temp[i] == array_temp[j]) cnt--;
//			}
//		}
	cout << cnt << endl;
	//cout << num_second << endl <<num_first<< endl;



		





	return 0;
}