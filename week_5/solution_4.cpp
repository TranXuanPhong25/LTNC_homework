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
    for (int i =0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m ;
    cin>>m;
    std::vector<int>::iterator it; 
    vector<pair<int,int>>res ;
    for (int i = 0; i<m; i++) {
        int num ;
       cin >> num;
    vector<int>::iterator pos = lower_bound(v.begin(), v.end(), num);
    if (*pos == num)
        cout << "Yes " << (pos - v.begin()) + 1 << endl;
    else
        cout << "No " << (pos - v.begin()) + 1 << endl;
    }
  
    return 0;
}
