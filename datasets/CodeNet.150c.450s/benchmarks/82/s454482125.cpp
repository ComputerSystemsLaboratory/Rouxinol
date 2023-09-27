//https://qiita.com/Nabetani/items/1f41e38cb92654ede6d8
//http://gi.ics.nara-wu.ac.jp/~takasu/lecture/programming/H26-gengo1-9.pdf
//https://qiita.com/shun-shun123/items/69af670f0332fa424f6e
//1個前の正面データを保有していたら、次が上面なのか補足可能
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/*サイコロのクラス設計
メンバー変数　上面の情報、各面が保有する数、各方向の面;
メンバー関数　数字割り当て、投げ、
*/

//vectorのfindはあるかどうかをイテレータで返すのみ。ポインタがめんどい。
//auto n_array = std::find(Counterclockwise_[m].begin(), Counterclockwise_[m].end(), n);
int index_search(vector<vector<int>> array, int m, int n) //m:上面の目の配列,n:S方向の目 const⇒&にすると引き渡し
{
    int index;
    for (int i = 0; i < 4; i++)
    {
        if (array[m][i] == n)
        {
            index = i;
            return index;
        }
    }
    return -1;
}

//値⇔ラベル変換
int label_search(int array[], int m)
{
    int label;
    for (int i = 0; i < 6; i++)
    {
        if (array[i] == m)
        {
            label = i + 1; //ラベルに対応
            return label;
        }
    }
    return -1;
}

class Dice
{
private:
public:
    int face[6]; //各面のポイント[0:1面,1:2面...]

    int BUsur, //BeforeUpper_1回前の上面の数_後で名前変える
        Usur,  //上面の数、
        Nsur,  //各方向の面の数[0:current,1:previous]
        Ssur,
        Esur,
        Wsur,
        Bsur; //Bottomsur

    string order; //INPUTの2行目

    Dice(); //(int)にすると怒られ
    void Allocate_num();
    void Infor_upsur(int);
    void Infor_sur();   //これいる？
    void D_throw();     //throwだと何か反応
    void Rsur_search(); //投げた後の右側面を探知_B用
};

Dice::Dice() //;を付けない
    : face{0},
      BUsur(1),
      Usur(1),
      Nsur(5),
      Ssur(2),
      Esur(3),
      Wsur(4),
      Bsur(6)
{
}

//各面の数値割り当て
void Dice::Allocate_num()
{
    for (int i = 0; i < 6; i++)
    {
        //i=0:Up,1:S,2:E,3:W,4:N,5:Bottom    ITP1_11_A の図の値から -1したものに対応
        cin >> face[i]; //input 1行目読み込み
    }
}

//上面の数値を出力
void Dice::Infor_upsur(int x)
{
    if (x == 0)
        cout << face[Usur - 1] << endl;
    else if (x == 1)
        cout << face[BUsur - 1] << endl;
}

//暇あったら作る
void Dice::Infor_sur()
{
}

//投げた後,各面の情報を保有
void Dice::D_throw()
{
    int n = 0;
    cin >> order;

    //最後の文字がnullではない.
    while (order[n] != '\0') //cin>>order && order[n] != '\0'にしてしまうとnullのstringが来るまで読み込み続ける
    {
        BUsur = Usur; //Upper情報の更新
        if (order[n] == 'N')
        {
            //前:後[U:S ,S:B, B:N, N:BU] EとWは保持
            Usur = Ssur;
            Ssur = Bsur;
            Bsur = Nsur;
            Nsur = BUsur;
        }
        else if (order[n] == 'S')
        {
            //前:後[U:N, N:B, B:S, S:BU] E,Wは保持
            Usur = Nsur;
            Nsur = Bsur;
            Bsur = Ssur;
            Ssur = BUsur;
        }
        else if (order[n] == 'E')
        {
            //[U:W, W:B, B:E, E:BU] N,Sは保持
            Usur = Wsur;
            Wsur = Bsur;
            Bsur = Esur;
            Esur = BUsur;
        }
        else if (order[n] == 'W')
        {
            //[U:E, E:B, B:W, W,BU]
            Usur = Esur;
            Esur = Bsur;
            Bsur = Wsur;
            Wsur = BUsur;
        }

        n++;
    }
}

//投げた後の情報のみで、右側面の数値を特定する
void Dice::Rsur_search()
{
    //問題文はメスサイコロ
    //上面が1,2,3のときに、周囲の数値を反時計周りに取得してきたもの
    //上面が4,5,6の反時計回りは、底面時の周囲の数値を時計回りしたものとなる。メッチャ分かりづらい。
    vector<vector<int>> Counterclockwise_ = {{2, 3, 5, 4},  //1　1,6が対応
                                             {6, 3, 1, 4},  //2
                                             {5, 1, 2, 6},  //3
                                             {6, 2, 1, 5},  //4
                                             {4, 1, 3, 6},  //5
                                             {4, 5, 3, 2}}; //6
    int q;                                                  //質問数
    int face_S, face_E, m, n;                               //m:上面,n:側面
    cin >> q;
    int Rsur[q];

    for (int i = 0; i < q; i++)
        Rsur[i] = 0; //Rsur[q] = {0}; だと怒られるかも

    for (int i = 0; i < q; i++)
    {
        cin >> face_S >> face_E;
        //自作関数：値をlabelに変換
        m = label_search(face, face_S);
        n = label_search(face, face_E);
        //自作関数: 2次配列の値=n の時,そのインデックスを持ってくる。ここでは南方向の目のindex
        int n_array = index_search(Counterclockwise_, m - 1, n);
        if (n_array == 3)
            Rsur[i] = Counterclockwise_[m - 1][0];
        else
            Rsur[i] = Counterclockwise_[m - 1][n_array + 1]; //nに対して右隣のindexに格納されているものが答え
    }

    for (int i = 0; i < q; i++)
    {
        //i=0:Up,1:S,2:E,3:W,4:N,5:Bottom    ITP1_11_A の図の値から -1したものに対応
        //呼び出すのは右側面に対応するラベル(ITP1_11_Aを参照)ではなく、face[]
        int ind = Rsur[i] - 1;
        cout << face[ind] << endl;
        //cout << Rsur[i] << endl;
    }
}

//Allocate_num,error
/*
10_A.cc: In function ‘int main()’:
10_A.cc:49:11: error: request for member ‘Allocate_num’ in ‘first’, which is of non-class type ‘Dice()’
     first.Allocate_num();
*/
//https://blog.amagi.dev/entry/20121130/cpp_create_instance
int main()
{
    Dice first; //first()にするとエラー
    first.Allocate_num();
    first.Rsur_search();

    /* dice_firstの中の変数を呼び出したいとき
    cout << first.face[1] << first.face[5];
    */
    return 0;
}
