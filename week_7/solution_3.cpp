#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

int power_(int x, int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= x;
    }
    return res;
}
void findPower(int x, int n, int cur, int acc, int &count)
{
    static int lim = pow(x, 1/static_cast<float>(n));
    cout<<acc<<" "<<cur<<endl;
    if (x == acc)
    {
        count++;
        return;
    }
    else
    {
        for (int i = cur; i <= lim; i++)
        {
            /* code */
            int curNum = power_(i, n);
            acc += curNum;
            if(acc>x) break;
            findPower(x, n, i+1, acc, count);
            acc-=curNum;
        }
    }
}
int powerSum(int X, int N)
{
    int count = 0;
    findPower(X, N, 1, 0, count);
    return count;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
