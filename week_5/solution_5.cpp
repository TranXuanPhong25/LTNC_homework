#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       
    int q; set<int> s; int x, y;

cin >> q;
for(int i =0; i < q;i++){
    cin >> y >> x;
    if(y== 1){
    s.insert(x);
    }
    if(y ==2)
    {
        s.erase(x);
    }
    if(y ==3)
    {
        if(s.find(x)!=s.end())
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
}
    return 0;
}
