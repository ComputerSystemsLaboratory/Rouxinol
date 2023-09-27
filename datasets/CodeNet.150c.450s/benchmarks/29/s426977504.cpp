#include <cstdio>
#include <string>

class List
{
    int* data_; //[4000000];
    int begin_;
    int end_;
public:
    List()
    {
        data_ = new int[4000000];
        begin_ = 2000000;
        end_  = 2000000;
    }
    // ~List()
    // {
    //     delete[] data_;
    // }
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
            for(int j = 7; com[j] >= '0' && com[j] <= '9'; ++j){
                v = v*10 + (com[j] - '0');
            }
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