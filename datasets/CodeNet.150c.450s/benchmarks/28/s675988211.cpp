/**************
*	Allocation
*************/

#include <iostream>
#include <vector>	//??£?¨?
#include <numeric>	//??¢??°
#include <algorithm>
using namespace std;

//??\???
vector<int> getLoadList(int n)//??????????????°
{	
	vector<int>loadList(n);//?????????
	
	for(int i=0; i<n; i++){
		cin >> loadList[i];
	}
	return loadList;//????????????
}

	//??????
bool check(vector<int>loadList, int k, int minP){
	int truck=1; 
	int sum  =0;
	for(int i=0; i< loadList.size(); i++){
		
		if(minP < (sum + loadList[i])){//
			truck ++;
			sum = 0 ;//??????????????????
		}
		sum += loadList[i];
	}
	if(k < truck){
		//????????????????????????????????????????????????????????£??????
		return false;
	}
	return true;
}

int main()
{
	//???????????°n??¨?????????????????°k??????????????????
	int n;
	cin >> n;
	
	int k;
	cin >> k;
	
	//?????????????????°??§??????????????????????????????
	vector<int> loadList = getLoadList(n);
	
	//?????????????±???????
	int minP = accumulate(loadList.begin(),loadList.end(),0)/n-1; 
	//?????????????????§??????
//	int minP = aveload+1;
	
	//minP????????§???????´???\???
	int max =(*max_element(loadList.begin(), loadList.end()));
	int maxP = ((double) n/k)*max;
	
	//?????????????????????????????¢??°???????????????????????°??????????????°??????????????????
	while((minP+1) != maxP){
	
		int p = (maxP+minP)/2;
		
		
		if( (p >= max) && (check(loadList, k, p ))){
			maxP = p;
		}else{
			minP = p;
		}
	}
	
	//?????§????????? P???????°?????????????
	cout << maxP << endl;
	
	return 0;
}