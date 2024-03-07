#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>v;
    for (int i =0   ;i<n    ;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    
    }
    int m,s,e;
    cin>>m>>s>>e;
    v.erase(v.begin()+m-1);
   v.erase(v.begin()+s-1,v.begin()+e-1);
//    cout<<n-m-1<<endl;
cout<<n-1-(e-s)<<endl;
   for (int i =0;i<n-2-(e-s);i++) {
       cout<<v[i]<<" ";
   }
   cout<<v[n-2-(e-s)];
    return 0;
}
