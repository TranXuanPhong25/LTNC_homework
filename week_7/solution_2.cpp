#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void permutate(T arr[], int size, int n, vector<T> store)
{
    if(static_cast<int>(store.size())==n){
        for (auto it : store)
        {
            cout<<it;
        }
        cout<<endl;
        return;
    }else{
        for (int i = 0; i < size; i++)
        {
            store.push_back(arr[i]);
            permutate(arr,size,n,store);
            store.pop_back();
        }
        
    }
}

int main()
{
    char arr[4] = {'a', 'b', 'c', 'd'};
    vector<char> store;
    permutate(arr, 4, 3, store);
}