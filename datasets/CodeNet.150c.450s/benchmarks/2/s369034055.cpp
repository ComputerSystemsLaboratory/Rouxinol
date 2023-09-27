#include<iostream>
#include<vector>
using namespace std;

void swap(int& a,int& b){
	int work;
	work = a;
	a = b;
	b = work;
}

int Partition(std::vector<int>& v,int p, int r){
	int x = v[r];
	int i;
	i = p-1;
	for(int j=p;j<r;j++){
		if(v[j]<=x){
			i++;
			swap(v[i],v[j]);
		}
	}
	swap(v[i+1],v[r]);
	return i+1;
}

int main(){
	int n,in;
	std::vector<int> v;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> in;
		v.push_back(in);
	}

	int q;
	q = Partition(v,0,n-1);

	for(int i=0;i<n;i++){
		if(i) cout <<" ";
		if(i==q){
			cout <<"[";
		}
		cout << v[i];
		if(i==q){
			cout << "]";
		}
	}
	cout << endl;
	return 0;
}