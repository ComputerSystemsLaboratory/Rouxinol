#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

#define	Hex_5		0x55555555
#define	Hex_3		0x33333333
#define	Hex_0f		0x0f0f0f0f
#define	Hex_00ff	0x00ff00ff
#define	Hex_ffff	0x0000ffff

inline int BitCount( int bits )
{
	bits = (bits & Hex_5	) + ((bits >>  1) & Hex_5	) ;
	bits = (bits & Hex_3	) + ((bits >>  2) & Hex_3	) ;
	bits = (bits & Hex_0f	) + ((bits >>  4) & Hex_0f	) ;
	bits = (bits & Hex_00ff	) + ((bits >>  8) & Hex_00ff) ;
	bits = (bits & Hex_ffff	) + ((bits >> 16) & Hex_ffff) ;

	return bits ;
}

int main()
{
    int R, C;
    while (cin >> R >> C, R | C) {
        vector<int> a(C);
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                int b;
                cin >> b;
                a[j] |= b << i;
            }
        }
        int res = 0;
        for (int i = 0; i < (1 << R); i++) {
            int cnt = 0;
            for (int j = 0; j < C; j++) {
                int x =	BitCount( a[ j ] ^ i ) ;	//	builtin_popcount(a[j] ^ i);
                cnt += max(x, R - x);
            }
            res = max(res, cnt);
        }
        cout << res << endl;
    }
    return 0;
}
