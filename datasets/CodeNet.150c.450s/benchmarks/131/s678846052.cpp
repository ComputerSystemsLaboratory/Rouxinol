#include<set>
#include<vector>
#include<iostream>
#define F(A, B) for(int A=0; A<B; A++)
using namespace std;

int main(){
	long num;
	int d;

	cin >> num >> d;
	while( !(num == 0 && d == 0) ){
		vector<long> arr;
		arr.push_back(num);
		int cnt=1;
		int I=-1, J=-1;
		while(1){
			multiset<int> nset;
			F(i, d){
				int dig=1;
				F(j, i){
					dig *= 10;
				}
				nset.insert( (num/dig)%10 );
			}

			int di=d-1;
			long mir=0;
			for(multiset<int>::iterator it=nset.begin(); it!=nset.end(); it++){
				int dig=1;
				F(j, di){
					dig *= 10;
				}
				mir += (*it)*dig;
				di--;
			}
			int max=0;
			di = d-1;
			for(multiset<int>::iterator it=nset.end(); it!=nset.begin(); ){
				it--;
				int dig=1;
				F(j, di){
					dig *= 10;
				}
				max += (*it)*dig;
				di--;
			}
			//cout << max << '|' << mir << '|' << max-mir << endl;
			num = max-mir;
			F(i, cnt){
				if(arr[i] == num){
					I = i;
					J = cnt-i;
					break;
				}
			}
			if(I>=0 && J>=0){
				cout << I << ' ' << num << ' ' << J << endl;
				break;
			}
			cnt++;
			arr.push_back(num);
		}
		cin >> num >> d;
	}
}