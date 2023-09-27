#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool kansu( pair< string, long long int > p, pair< string, long long int > q ) {

  if ( p.first[1] < q.first[1] ) return true;

  return false;

}

void print( long long int n, vector< pair< string, long long int > > v ) {

  bool f = true;

  for ( long long int i = 0; i < n; i++ ) {

    if ( i != 0 ) {
      cout << " ";
      if ( v[i-1].first[1] == v[i].first[1] && v[i-1].second > v[i].second ) f = false;
    }
    cout << v[i].first;

  }

  cout << endl;

  if ( f == true ) {
    cout << "Stable" << endl;
  }else {
    cout << "Not stable" << endl;
  }

  return;

}

void BubbleSort( long long int n, vector< pair< string, long long int > > v ) {

  for ( long long int i = 0; i < n; i++ ) {

    for ( long long int j = n - 1; j > i; j-- ) {

      if ( kansu( v[j], v[j-1] ) == true ) swap( v[j], v[j-1] );

    }

  }

  print( n, v );

  return;

}

void SelectionSort( long long int n, vector< pair< string, long long int > > v ) {

  for ( long long int i = 0; i < n; i++ ) {

    long long int minj = i;

    for ( long long int j = i; j < n; j++ ) {

      if ( kansu( v[j], v[minj] ) == true ) minj = j;

    }

    swap( v[i], v[minj] );

  }

  print( n, v );

  return;

}

int main() {

  long long int n;
  cin >> n;

  vector< pair< string, long long int > > v;

  for ( long long int i = 0; i < n; i++ ) {

    string in;
    cin >> in;

    v.push_back( make_pair( in, i ) );

  }

  BubbleSort( n, v );
  SelectionSort( n, v );

  return 0;

}