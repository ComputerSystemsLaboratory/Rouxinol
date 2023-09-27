#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main(){
	int data[5];
	cin>>data[0]>>data[1]>>data[2]>>data[3]>>data[4];
	sort( data, data+5, greater<int>() );
	for( int i=0;i<5;i++ ){
		cout<<data[i];
		if( i!=4 )cout<<" ";
	}
	cout<<endl;
	return 0;
}