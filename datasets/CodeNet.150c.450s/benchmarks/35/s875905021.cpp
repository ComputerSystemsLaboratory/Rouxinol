#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int debug = 0;

int main(void){
	int i, j, k;
	int n, m;
	int tmp, maxi, cont;
	vector<int> intv, imax;

	while(cin >> n){
		if(n == 0) break;
		
		for(i=0;i<n;i++){
			cin >> m;
			intv.push_back(m);
		}

		cont = 0;
		maxi = 0;
		tmp = 0;
		for(i=0;i<intv.size();i++){
			cont = cont + intv[i];
			cont = max(0, cont);
			maxi = max(maxi, max(cont, intv[i]));
		}

		if(maxi != 0){
			cout << maxi << endl;
		}else{
			cout << *max_element(intv.begin(), intv.end()) << endl;
		}
		intv.clear();
	}

	return 0;
}

int b_main(void){
	int n, m, i, j, k;
	int tmp, max;
	bool first = 0, notAllMinus=0;
	vector<int> intv;

	while(cin >> n){
		if(n == 0){
			break;
		}else{
			//ÇÝÝ
			for(i=0;i<n;i++){
				cin >> m;
				intv.push_back(m);
				//if(debug) cout << "int[" << i << "] =" << intv[i] << endl; 
			}

			//SÌêÌ»è
			tmp = intv[0];
			for(i=0;i<intv.size();i++){
				if(intv[i] > 0){
					notAllMinus = 1;
					break;
				}else{
					if(tmp < intv[i]){
						tmp = intv[i];
					}
				}
			}

			if(notAllMinus == 0){
				cout << tmp << endl;
				intv.clear();
				continue;
			}

			//vfð¸ç·
			tmp=0;
			for(i=1;i<intv.size();i++){
				if(intv[tmp] > 0){
					if(intv[i] > 0){ //¯Èç
						intv[tmp] += intv[i];
						intv[i] = 0;
					}else{ //ÙÈç
						tmp = i;
					}
				}else if(intv[tmp] < 0){
					if(intv[i] < 0){
						intv[tmp] += intv[i];
						intv[i] = 0;
					}else{
						tmp = i;
					}
				}
			}
			
			if(debug){
				for(i=0;i<intv.size();i++){
					cout << intv[i] <<endl;
				}
				cout << "----------------------" << endl;
			}
			
			intv.erase( remove(intv.begin(), intv.end(), 0), intv.end());
			
			if(debug){
				for(i=0;i<intv.size();i++){
					cout << intv[i] <<endl;
				}
			}
			

			int vsize = intv.size();
			for(i=1;i<=vsize;i+=2){//i:Â
				if(debug) cout << "number = " << i << endl;
				for(j=0;j<=vsize-1-i+1;j++){ //j:JnÊu
					tmp = 0;
					for(k=0;k<i;k++){
						tmp += intv[j+k];
					}
					if(debug) cout << "tmp == " << tmp << endl;
					if(first == false){
						max = tmp;
						first = true;
					}else if(max < tmp){
						max = tmp;
					}
				}
			}
			cout << max << endl;
			intv.clear();
			first = false;
			notAllMinus = 0;
		}
	}
	return 0;
}