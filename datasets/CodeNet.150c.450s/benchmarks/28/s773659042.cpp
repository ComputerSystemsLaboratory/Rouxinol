#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector<int> Input(const int n)
{
	vector<int> W;
	for(int i = 0; i < n; i++){
		int w;
		cin >> w;
		W.push_back(w);
	}
	return W;
}

bool IsAllLoaded(int P, vector<int>& W, int k)
{
	int TrackIndex = 0;
	int CurrentSum = 0;
	int i = 0;
	for(i = 0; i < W.size(); i++){
		if(W[i] > P){
			return false;
		}
		if(CurrentSum + W[i] > P){
			TrackIndex++;
			if(TrackIndex == k){
				return false;
			}
			CurrentSum = 0;
		}
		CurrentSum += W[i];
	}
	return true;
}

int Calc(vector<int> W, int k)
{
	int Sum = accumulate(W.begin(), W.end(), 0 );
	int Ave = Sum / W.size();
	int e = Sum;
	int s = Ave;
	int m = (e + s) / 2;
//	cout << s << ' ' << m << ' ' << e << endl;
	
	while(IsAllLoaded(m, W, k) || !IsAllLoaded(m+1, W, k)){
		if(IsAllLoaded(m, W, k) && IsAllLoaded(m+1, W, k)){
			e = m;
			m = (s + m) / 2;
			if(s == e) return m;
		}else{
			s = m;
			m = (e + m) / 2;
		}
//		cout << s << ' ' << m << ' ' << e << endl;
	}
	return m+1;
}

int main()
{
	int n, k; //n:???????????° k:?????????????????°  
	cin >> n >> k;
	vector<int> W = Input(n);
	int P = Calc(W, k); //P:??????????????????????????????????????????????????§????????????????°????
	cout << P << endl;
	return 0;
}