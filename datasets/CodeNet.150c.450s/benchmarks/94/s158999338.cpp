/***
*	??????????????????
*	???????????????????????£???????????£??\????´?????????????????????§????¬???????????????°?????????
*	?????????????°?????????£??\??????????´?????????????????????????????????§?°???¢?????????????????°???????????????
****/

#include <iostream>
#include <vector>
using namespace std;


int bubbleSort(vector<int> &str, int n, int *cnter){
	for( int i=0 ; i < n-1 ; i++ ){
		
		for(int j = 1 ; j< (n-i); j++){
			if( str[j-1] > str[j] ){//????????????????´???¨??????
				int temp = str[j];
				str[j]     = str[j-1];
				str[j-1]   = temp;
				(*cnter) ++;		//???????????°???????????? //??????????????????
			}
		}
	}
	return 0;
}

int main(void)		//???????????¢??°
{
	int n;
	cin >> n;
	
	vector <int> str;
	str.resize(n);
	
	for(int i =0; i < n ;  i++){	//????????\???
		cin >> str[i] ;
	}
	
	int cnter = 0;
//----------------------------------	?????????????????????????§?
	bubbleSort(str, n, &cnter);
	
//----------------------------------	???????????????
	for(int i =0; i<n ; i++){
		cout << str[i] ;
		if(i != (n-1)){
			cout << " ";
		}
	}
	cout << endl;
	
	cout << cnter << endl;//???????????°????????¢??°???????????¢?????°??¨?????°??????????????±?????????????????¨?????°???
	
	return 0;
}