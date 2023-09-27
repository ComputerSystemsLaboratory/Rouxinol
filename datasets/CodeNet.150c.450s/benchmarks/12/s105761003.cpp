#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int parent(int i){
	return i/2;
}

int left(int i){
	return 2*i;
}

int right(int i){
	return 2*i +1;
}

int heapsize(vector <int> x){
	return x.size()-1;
}

int main(void){
	int n;
	cin >> n;

	vector <int> x(n+1);

	for (int i=1; i<n+1; i++){
		cin>>x[i];
	}

	int xsize = x.size()-1, tmp;
	stringstream buf;
	for (int i=1; i<n+1; i++){
		buf<<"node "<<i<<": ";
		buf<<"key = "<<x[i]<<", ";
		tmp = parent(i);		
		if (tmp>0 && tmp<=xsize) buf<<"parent key = "<<x[tmp]<<", ";
		tmp = left(i);		
		if (tmp>0 && tmp<=xsize) buf<<"left key = "<<x[tmp]<<", ";
		tmp = right(i);		
		if (tmp>0 && tmp<=xsize) buf<<"right key = "<<x[tmp]<<", ";
		cout<<buf.str()<<endl;
		buf.str("");
	}
	return 0;
} 