#include <cstdio>
#include <iostream>
#define MIN 2
#define MAX 200000
#define MINUS -1
#define INFTY 2000000000

using namespace std;

int n;//num of input
int num_array[MAX+1];//0オリジン
int min_array[MAX+1];
int max_array[MAX+1];


int main(){
	int min_tmp = INFTY;
	int max_tmp = MINUS;
	int ans = -1 * INFTY;//MINUSではだめ
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&num_array[i]);
	}

	for(int i = 0;i < n-1;i++){
		if(num_array[i] < min_tmp){
			min_tmp = num_array[i];
			min_array[i] = min_tmp;
		}else min_array[i] = min_tmp;
	}
	for(int i = n-1;i >= 1;i--){
		if(num_array[i] > max_tmp){
			max_tmp = num_array[i];
			max_array[i-1] = max_tmp;
		}else max_array[i-1] = max_tmp;
	}

	/*なぜ1からn-1かというとi==0,n-1のときmin_array[i] == max_array[i]
	 *よりnum_arrayが狭義単調減少してans<0となる場合でもans == 0となってしまうから
	 */
	for(int i = 0;i < n-1;i++){
		if(max_array[i] - min_array[i] > ans) ans = max_array[i] - min_array[i];
		//cout <<num_array[i] <<" "  <<max_array[i] <<"  " <<min_array[i] <<endl;
	}

	cout <<ans <<endl;

	return 0;
}