#include <iostream>
#include <vector>

void Swap( int& a, int& b ){
    int tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}

// when 0th Recurtion, params -> Partition( v, 1, v.size()-1 );
int Partition( std::vector<int>& v, int p, int r ){
    int x = v[r];
    //std::cout << "after v[r]\n";
    int i = p - 1;
    //std::cout << "loop: ";
    for( int j = p; j < r; ++j ){
        //std::cout << j << " ";
        if( v[j] <= x ){
            Swap( v[++i], v[j] );
        }
    }
    //std::cout << "\n";
    Swap( v[i+1], v[r] );
    return i + 1;
}

int main(){
    int n;
    std::cin.tie(0);
    std::cin >> n;

    std::vector<int> v(n);
    for( auto& elem : v ){
        std::cin >> elem;
        //std::cout << elem << " ";
    }
    //std::cout << "\n";

    int r = Partition( v, 0, v.size()-1 );

    for( int i = 0; i < v.size(); ++i ){
        if( i != r ){
            std::cout << v[i] << ( ( i != v.size()-1 )? " " : "\n" );
        }else{
            std::cout << "[" << v[i] << "]" << ( ( i != v.size()-1 )? " " : "\n" );
        }
    }

}
