#include <bits/stdc++.h>
using namespace std;

template <typename D, typename T = D, typename L = T>
class Tree
{
public:
	Tree( long long int size = 0, D InitialValueArg = D() ) {
		long long int n = 1LL;
		CalcTree.emplace_back( vector<TreeNode>( n ) );
		while( n <= size ) {
			n <<= 1LL;
			addOneLine( n );
		}
		InitialValue = InitialValueArg;
		Data.resize( n, InitialValue );
		for( size_t i = 0; i < Data.size(); i++ ) {
			update( i, Data[i] );
		}
		MaxSize = n;
		NowIndex = 0LL;
	}

	virtual T preprocessing( D a ) {
		return T( a );
	}

	virtual T treeupdate( T a, T b ) {
		return a;
	}

	virtual L lazyupdate( L parent, L me ) {
		return parent;
	}

	virtual T fromlazytotreenode( L lazy, T nownode ) {
		return nownode;
	}

	void update( long long int idx, D data ) {
		calcLazyUpdate( idx, idx + 1 );
		Data[idx] = data;

		updateTreeNodeidx( idx, preprocessing( data ) );
	}

	void rangeupdate( long long int idxl, long long int idxr, L data ) {

	}

	void show() {
		for( auto x : CalcTree ) {
			for( auto y : x ) {
				cout << y << " ";
			}
			cout << endl;
		}
	}

	void push( D data ) {
		if( NowIndex == MaxSize ) {
			MaxSize <<= 1LL;
			addOneLine( MaxSize );
			vector<D>Datamemo( MaxSize, InitialValue );
			copy( Data.begin(), Data.end(), Datamemo.begin() );
			for( long long int i = 0; i < Datamemo.size(); i++ ) {
				update( i, Datamemo[i] );
			}
		}
		Data[NowIndex] = data;
		update( NowIndex, data );
		NowIndex++;
	}

	T range( long long int l, long long int r ) {
		calcLazyUpdate( l, r );
		return rangeProcessing( 0, l, r, 0, 0, MaxSize );
	}

	long long int t() {
		return 10;
	}

private:

	//??????????????????
	struct TreeNode
	{
		T Ndata;

		//?????¶?????????
		struct
		{
			long long int Lnum;
			L Ldata;
		};
	};
	vector<vector<TreeNode>> CalcTree;
	vector<D> Data;
	long long int MaxSize;
	long long int NowIndex;
	D InitialValue;

	void addOneLine( long long int n ) {
		CalcTree.emplace_back( vector<TreeNode>( n ) );
	}

	T rangeProcessing( long long int d, long long int a, long long int b, long long int k, long long int l, long long int r ) {
		if( !(r <= a || b <= l) && d < CalcTree.size() ) {
			if( a <= l&&r <= b ) {
				return CalcTree[d][k].Ndata;
			} else {
				return treeupdate( rangeProcessing( d + 1, a, b, k * 2, l, (l + r) / 2 ), rangeProcessing( d + 1, a, b, k * 2 + 1, (l + r) / 2, r ) );
			}
		}
		return InitialValue;
	}

	void calcLazyUpdate( long long int idxl, long long int idxr, long long int i = 0, long long int nowidx = 0 ) {
		if( i < CalcTree.size() - 1 ) {
			CalcTree[i + 1][nowidx * 2].Ldata = lazyupdate( CalcTree[i][nowidx].Ldata, CalcTree[i + 1][nowidx * 2].Ldata );
			CalcTree[i + 1][nowidx * 2 + 1].Ldata = lazyupdate( CalcTree[i][nowidx].Ldata, CalcTree[i + 1][nowidx * 2 + 1].Ldata );
			CalcTree[i][nowidx].Ldata = L();
			long long int nextidxplus = 1LL << (CalcTree.size() - i - 1);
			nowidx *= 2;
			if( idxr <= nowidx + nextidxplus ) {
				calcLazyUpdate( idxl, idxr, i + 1, nowidx );
			} else if( nowidx + nextidxplus <= idxl ) {
				calcLazyUpdate( idxl, idxr, i + 1, nowidx + 1 );
			} else {
				calcLazyUpdate( nowidx + nextidxplus, idxr, i + 1, nowidx + 1 );
				calcLazyUpdate( idxl, nowidx + nextidxplus, i + 1, nowidx );
			}
		} else {
			T nextT = fromlazytotreenode( CalcTree[i][nowidx].Ldata, CalcTree[i][nowidx].Ndata );
			if( nextT != CalcTree[i][nowidx].Ndata ) {
				updateTreeNodeidx( nowidx, nextT );
			}
		}
	}

	void updateTreeNodeidx( long long int idx, T TreeNodeData ) {
		(*(CalcTree.rbegin()))[idx].Ndata = preprocessing( TreeNodeData );
		for( auto ite = CalcTree.rbegin(); ite + 1 < CalcTree.rend(); ) {
			idx >>= 1LL;
			T updatedata = treeupdate( (*ite)[idx * 2].Ndata, (*ite)[idx * 2 + 1].Ndata );
			ite++;
			if( (*ite)[idx].Ndata != updatedata ) {
				(*ite)[idx].Ndata = updatedata;
			} else {
				break;
			}
		}
	}

	long long int addrangeLazy( long long int idxl, long long int idxr, long long int i = 0, long long int nowidx = 0 ) {

	}
};

class RSQ :public Tree<long long int>
{
public:
	RSQ( long long int a, long long int b ) :Tree( a, b ) {
	}
	long long int treeupdate( long long int a, long long int b ) {
		return a + b;
	}

};

int main() {
	long long int N, Q;
	cin >> N >> Q;
	RSQ rsq( N, 0 );
	vector<long long int>data( N );
	for( size_t i = 0; i < Q; i++ ) {
		long long int a, b, c;
		cin >> a >> b >> c;
		if( a == 0 ) {
			b--;
			data[b] += c;
			rsq.update( b, data[b] );
		} else {
			cout << rsq.range( b - 1, c ) << endl;
		}
	}
}