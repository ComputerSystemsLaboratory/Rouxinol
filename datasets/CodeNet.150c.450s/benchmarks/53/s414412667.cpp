#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void createPrimeTable(int* table, int size);

int main()
{
    int n;
    cin >> n;
    cout << n << ":";
    int sn = (int)sqrt(n);

    /* 素数表を作る */
    int prime_table[sn+1];
    createPrimeTable(prime_table, sn+1);

    vector<int> prime;
    for(int i=0; i<sn+1; i++) 
        if( prime_table[i] ) prime.push_back(i);

    vector<int>::iterator i;
    // for(i=prime.begin(); i!=prime.end(); i++) cout << *i << endl;

    /* ここから本番 */
    for(i=prime.begin(); i!=prime.end(); ){
        if( !(n%(*i)) ){
            if( n == *i ) break;
            cout << " " << *i;
            n /= *i;
            continue;
        }
        i++;
    }
    cout << " " << n << endl;


    return 0;
    
}

void createPrimeTable(int* table, int size)
{
    for(int i=0; i<size; i++) table[i] = 1;
    
    table[0] = table[1] = 0;

    for(int i=2; i<size; i++){
        if( table[i] ){
            for(int j=i+i;j<size; j+=i ){ table[j] = 0; }
        }
    }
}    