#include <iostream>
#include <vector>
#include <utility>

int Partition( std::vector<std::pair<char, int>>& v, int p, int r ){
    int x = v[r].second;
    int i = p - 1;
    for( int j = p; j < r; ++j ){
        if( v[j].second <= x ){
            v[++i].swap( v[j] );
        }
    }
    v[i+1].swap( v[r] );
    return i + 1;
}

void QuickSort( std::vector<std::pair<char, int>>& v, int p, int r ){
    if( p < r ){
        int q = Partition( v, p, r );
        QuickSort( v, p, q-1 );
        QuickSort( v, q+1, r );
    }
}

std::string CheckStable( std::vector<std::pair<char, int>>& initial, std::vector<std::pair<char, int>>& sorted ){
    int N = sorted.size();
    for( int i = 0; i < N; ++i ){
        for( int j = i+1; j < N; ++j ){
            if( initial[i].second == initial[j].second ){
                for( int a = 0/*BinarySearch( sorted, initial[i].second )*/; a < N; ++a ){
                    if( sorted[a].second == initial[i].second ){
                        for( int b = a+1; b < N; ++b ){
                            if( initial[i] == sorted[b] &&
                                initial[j] == sorted[a] ){
                                return "Not stable";
                            }
                        }
                    }
                }
            }
        }
    }
    return "Stable";
}

int main(){
    int n;
    std::cin.tie(0);
    std::cin >> n;

    std::vector<std::pair<char, int>> cards( n );
    int number;
    char symbol;
    for( auto& elem : cards ){
        std::cin >> symbol >> number;
        elem = std::make_pair( symbol, number );
    }

    std::vector<std::pair<char, int>> input( cards );

    QuickSort( cards, 0, cards.size()-1 );

    std::cout << CheckStable( input, cards ) << "\n";
    for( const auto& elem : cards ){
        std::cout << elem.first << " " << elem.second << "\n";
    }
}
