#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() { /* Enter your code here. Read input from STDIN. Print output to STDOUT */
map<string,int> mp; int i, nums, op, val; string key;

cin >> nums;
for (i = 0; i < nums; i++)
{
    cin >> op >> key;
    if (op == 1)
    {
        cin >> val;
        mp[key] += val;
    }
    else if (op == 2)
        mp.erase(key);
    else if (op == 3)
    {
        if (mp.find(key) != mp.end())
            cout << mp[key] << endl;
        else
            cout << 0 << endl;
    }

}

return 0;
}
