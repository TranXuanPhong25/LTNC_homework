#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[100],b[101];
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n+1; i++)
    {
        cin>>b[i];
        mp[b[i]]++;
        
    }

    for (auto it:mp)
    {
        /* code */
        if(it.second%2 ==1){
            cout<<it.first;
            break;
        }
        
    }

    return 0;
}
