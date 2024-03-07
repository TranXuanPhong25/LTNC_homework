#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int n, q,size; cin>>n>>q; int **array_ = new int*[n];

for(int a=0; a<n; a++)
{
    cin>>size;
    array_[a] = new int[size];
    for(int iter=0; iter<size; iter++)
    {
        cin>>array_[a][iter];
    }
}
    int arrno[q], elem[q];
    for(int q2=0; q2<q; q2++)
    {
        cin>>arrno[q2]>>elem[q2];

    }
    for(int ans=0; ans<q; ans++)
    {
        cout<<array_[arrno[ans]][elem[ans]]<<endl; 
    }

for(int i=0; i<n; i++)
{
    delete[] array_[i];
}    
delete[] array_;


return 0;
}
