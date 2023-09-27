//大文字と小文字は区別しない。
#include<iostream>
#include<string>

using namespace std;

string str[1050];
int type;

int cnt[1050];

int main(){
	int i;
	string input;
	
	while( cin >> input ){
		if( input[0] == '\n' )
			break;
		if( input[0] >= 'A' && input[0] < 'a' )
			input[0]+=32;
		
		for( i = 0;i < type;i++ ){
			if( str[i] == input ){
				cnt[i]++;
				break;
			}
		}
		if( i == type ){
			str[type] = input;
			cnt[type]++;
			type++;
		}
	}
	
	int mmax = 0;
	
	for( i = 0;i < type;i++ ){
		mmax = max( mmax, cnt[i] );
	}
	
	for( i = 0;i < type;i++ ){
		if( mmax == cnt[i] ){
			cout << str[i] << " ";
			break;
		}
	}
	
	int maxlen = 0;
	
	for( i = 0;i < type;i++ ){
		maxlen = max( maxlen, (int)str[i].length() );
	}
	
	for( i = 0;i < type;i++ ){
		if( maxlen == (int)str[i].length() ){
			cout << str[i] << endl;
			break;
		}
	}
	return 0;
}