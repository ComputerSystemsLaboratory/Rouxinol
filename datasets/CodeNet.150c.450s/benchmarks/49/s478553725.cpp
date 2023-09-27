#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

struct CONTEST_DATA{
	int judgements;
	vector< int > points;
};

int main( void ){

	vector< CONTEST_DATA > contests;
	vector< int > answers;

	while( true ){
		CONTEST_DATA cd;
		cin >> cd.judgements;
		if( cd.judgements == 0 ){
			break;
		}
		int point;
		for( int i = 0; i < cd.judgements; i++ ){
			cin >> point;
			cd.points.push_back( point );
		}
		contests.push_back( cd );
	}

	for( int i = 0; i < contests.size(); ++i ){
		sort( contests[ i ].points.begin(), contests[ i ].points.end() );
	}
	for( int i = 0; i < contests.size(); ++i ){
		vector< int >::iterator p = contests[i].points.begin();
		contests[ i ].points.erase( p );
		p = contests[ i ].points.end() - 1;
		contests[ i ].points.erase( p );
	}

	for( int i = 0; i < contests.size(); ++i ){
		int answer = 0;
		for( int l = 0; l < contests[ i ].points.size(); ++l ){
			answer += contests[ i ].points[ l ];
		}
		cout << answer / ( contests[ i ].judgements - 2 )<< endl;
	}

	return 0;
}