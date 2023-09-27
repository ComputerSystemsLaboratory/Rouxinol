#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main(){
	int N, M;
	vector<string> regi;
	cin >> N;
	for( int i = 0; i < N; i++ ){
		string ID;
		cin >> ID;
		regi.push_back(ID);
	}
	cin >> M;
	int rock = 0;
	for( int i = 0; i < M; i++ ){
		string ID;
		cin >> ID;
		size_t j = 0;
		for( ; j < regi.size(); j++ ){
			if( ID == regi[j] ){
				if( rock == 0 ){
					cout << "Opened by " << regi[j] << endl;
					rock = 1;
				}else{
					cout << "Closed by " << regi[j] << endl;
					rock = 0;
				}
				break;
			}
		}
		if( j == regi.size() ) cout << "Unknown " << ID << endl;
	}
}