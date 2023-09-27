#include<iostream>
#include<string>
#include<vector>

using namespace std;

void bubbleSort( vector<string> &cards )
{
	for( int i=0; i<cards.size( ); i++ ) {
		for( int j=cards.size( )-1; i<j; j-- ) {
			if( cards[j][1]< cards[ j-1 ][1] ) {
				swap( cards[j], cards[ j-1 ] );
			} 
		}	
	}
	return;
}

void selectionSort( vector<string> &cards )
{
	int mini;
	for( int i=0; i<cards.size( ); i++ ) {
		mini = i;
		for( int j=i; j<cards.size( ); j++ ) {
			if( cards[j][1] < cards[mini][1] ) {
				mini = j;
			} 
		}
		swap( cards[i], cards[ mini ] );
	}
	return;
}

void print( vector<string> &cards )
{
	for( int i=0; i<cards.size( ); i++ ) {
		cout<<cards[i];
		if( i != cards.size( )-1 ) { cout<<" "; }
	}
	cout<<endl;
	
	return;
}

int main( )
{	
    int n;
    cin>>n;
    
    vector<string> cards(n);
    vector<string> cards2(n);
    for( int i=0; i<n; i++ ) {
    	cin>>cards[i];
    }
    cards2 = cards;
	bubbleSort( cards );
	print( cards );
    cout<<"Stable"<<endl;

	selectionSort( cards2 );
	print( cards2 );
	bool isStabe = true;
	for( int i=0; i<cards2.size( ); i++ ) {
		if( cards2[i].at( 0 ) != cards[i].at( 0 ) ) { 
			isStabe = false;
			break;
		}
	}
	if( isStabe ) {
		cout<<"Stable"<<endl;
	} else {
		cout<<"Not stable"<<endl;
	}
	
	return 0;
}