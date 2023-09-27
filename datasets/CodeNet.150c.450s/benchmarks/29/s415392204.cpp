#include <cstdio>
#include <cstring>
#include <string>
 
class List
{
    int* data_;
    int begin_;
    int end_;
public:
    List()
    {
        data_  = new int[2000000];
        begin_ = 1999999;
        end_   = 1999999;
    }
    void Insert(int X)
    {
        --begin_;
        data_[begin_] = X;
    }
    void Delete(int X)
    {
        int Index = end_;
        for(int i = begin_; i < end_; ++i){
            if(X == data_[i]){
                Index = i;
                break;
            }
        }
        if(Index == end_) return;
        for(int i = Index; i < end_; ++i){
            data_[i] = data_[i+1];
        }
        end_--;
    }
    void DeleteFirst()
    {
        begin_++;
    }
    void DeleteLast()
    {
        end_--;
    }
    void Show()const
    {
        printf("%d", data_[begin_]);
        for(int i = begin_ + 1; i < end_; ++i){
            printf(" %d", data_[i]);
        }
        printf("\n");
    }
};
 
int main()
{
    List list;
    int n, X;
    std::scanf("%d\n", &n);
    char com[1024];
    for(int i = 0; i < n; ++i){
        std::fgets(com, 1024, stdin);
        if(com[6] == 'F'){
            list.DeleteFirst();
        }else
        if(com[6] == 'L'){
            list.DeleteLast();
        }else{
            int v = 0;
            
            int len = std::strlen(com) - 8;
            switch (len) {
                case 10: v += (com[len - 3] -  '0') * 1000000000;
                case 9:  v += (com[len - 2] -  '0') * 100000000;
                case 8:  v += (com[len - 1] -  '0') * 10000000;
                case 7:  v += (com[len    ] -  '0') * 1000000;
                case 6:  v += (com[len + 1] -  '0') * 100000;
                case 5:  v += (com[len + 2] -  '0') * 10000;
                case 4:  v += (com[len + 3] -  '0') * 1000;
                case 3:  v += (com[len + 4] -  '0') * 100;
                case 2:  v += (com[len + 5] -  '0') * 10;
                case 1:  v += (com[len + 6] -  '0');
            }
            // for(int j = 7; com[j] >= '0' && com[j] <= '9'; ++j){
            //     v = v*10 + (com[j] - '0');
            // }
            if(com[0] == 'i'){
                list.Insert(v);
            }else
            if(com[0] == 'd'){
                list.Delete(v);
            }
        }
    }
    list.Show();
    return 0;
}