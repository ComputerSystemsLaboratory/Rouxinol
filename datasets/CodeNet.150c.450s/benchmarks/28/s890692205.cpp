#include <cstdio>

using namespace std;

//bus?????°

int bus( int P, int W[], int n, int k ){

    int i, buffer, sum, count, number;

    sum = 0;
    number = 0;
    count = 1;

    for( i = 0 ; i < n ; i++ ){

        sum += W[i];

        if( sum > P ){

            sum = W[i];
            count++;

            if( sum > P ) return 0;
            
            if( count > k){

                break;

            }

        }

        number++;

    }

    return number;

}

//binary search

int binary_search( int W[], int sum_weight, int n , int k ){

    int left, j, buffer;
    long long right;

    left = 0;
    right = sum_weight;

    while( left < right ){

        j = ( left + right ) / 2;

        buffer = bus( j, W, n, k);

        if ( buffer >= n ){ 
            
            right = j;

            if( right - left <= 0 ) left--;

        }else{

            left = j + 1;

        }

            if( right - left == 0 ) {left--; break;}

//        printf(" P = %d, number of baggage = %d, left = %d, right = %d\n", j, buffer, left,right);

    }
//        printf(" P = %d, number of baggage = %d, left = %d, right = %d\n", j, buffer, left,right);

    return left+1;

}

//??¬???

int main(){

    int n, k, i, P;
    long long sum_weight = 0;

    scanf("%d %d", &n, &k);

    int W[n];

    for( i = 0 ; i < n ; i++ ){

        scanf("%d", &W[i] );

        sum_weight += W[i];

    }

    P = binary_search( W, sum_weight, n, k );

    printf("%d\n", P);



}