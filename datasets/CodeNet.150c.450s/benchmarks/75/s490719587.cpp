#include <iostream>
#include <vector>

void Swap( int& a, int& b ){
    int tmp = std::move( a );
    a = std::move( b );
    b = std::move( tmp );
}

class Heap{
public:
    Heap( std::vector<int>& vec ) : arr( vec ){
        BuildMaxHeap();
    }

    //Getter
    int operator[]( int i ){ // returns i-th elem's key
        return arr[i];
    }

    bool HasLeft( int i ){
        return LeftIndex( i ) < arr.size();
    }

    bool HasRight( int i ){
        return RightIndex( i ) < arr.size();
    }

    int Parent( int i ){
        return arr[ParentIndex( i )];
    }

    int Right( int i ){
        return arr[RightIndex( i )];
    }

    int Left( int i ){
        return arr[LeftIndex( i )];
    }

    //Setter

private:
    int ParentIndex( int i ){ // returns i-th elem's parent's index of arr
        return i/2;
    }

    int LeftIndex( int i ){
        return 2*i;
    }

    int RightIndex( int i ){
        return 2*i+1;
    }

    void MaxHeapify( int i ){
        int left = LeftIndex( i );
        int right = RightIndex( i );
        int largest;
        if( left < arr.size() && arr[left] > arr[i] ){
            //std::cout << " arr[left] > arr[i] ";
            largest = left;
        }else{
            largest = i;
        }

        if( right < arr.size() && arr[right] > arr[largest] ){
            //std::cout << " arr[largest] > arr[i] ";
            largest = right;
        }

        if( largest != i ){
            Swap( arr[i], arr[largest] );
            MaxHeapify( largest );
        }
    }

    void BuildMaxHeap(){
        for( int i = ( arr.size()-1 ) / 2; i > 0; --i ){
            //std::cout << "build[" << i  << "] " << arr[i] << "->";
            MaxHeapify( i );
            //std::cout << arr[i] << "\n";
        }
    }

    //variables
    std::vector<int>& arr;
};

int main(){
    int n;
    std::cin.tie( 0 );
    std::cin >> n;

    std::vector<int> v = std::vector<int>( n+1 );
    for( int i = 1; i <= n; ++i ){
        std::cin >> v[i];
    }

    Heap maxheap( v );

    for( int i = 1; i <= n; ++i ){
        std::cout << " " << maxheap[i];
    }
    std::cout << "\n";
}
