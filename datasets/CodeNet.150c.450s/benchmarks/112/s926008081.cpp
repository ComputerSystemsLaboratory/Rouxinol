#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int  ChangeNum;
	int  WordNum;
	char BeforWord;
	char AfterWord;
	char Word;

	vector< pair< char, char > > vecpChangePair;
	vector< pair< char, char > > :: iterator pIt;
	vector< pair< char, bool > > vecpString;
	vector< pair< char, bool > > :: iterator vIt;

	while( 1 ) {

		cin >> ChangeNum;

		if( ChangeNum == 0 ) break;

		for( int i = 0; i < ChangeNum; i++ ) {

			cin >> BeforWord >> AfterWord;

			vecpChangePair.push_back( pair< char, char >( BeforWord, AfterWord ) );

		}

		cin >> WordNum;

		for( int i = 0; i < WordNum; i++ ) {

			cin >> Word;

			vecpString.push_back( pair< char, bool >( Word, false ) );

		}

		for( vIt = vecpString.begin(); vIt != vecpString.end(); ++vIt ) {

			for( pIt = vecpChangePair.begin(); pIt != vecpChangePair.end(); ++pIt ) {

				if( vIt->first == pIt->first && !vIt->second ) {

					vIt->first = pIt->second;

					vIt->second = true;

				}

			}

		}

		for( vIt = vecpString.begin(); vIt != vecpString.end(); ++ vIt ) {

			cout << vIt->first;

		}

		cout << endl;

		vecpChangePair.clear();
		vecpString.clear();

	}

	return 0;

}