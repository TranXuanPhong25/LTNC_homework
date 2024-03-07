#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    bool isAM = s.substr(8, 2) == "AM";
    string res;
    string h = s.substr(0, 2);
    string m = s.substr(3, 2);
    string sc = s.substr(6, 2);
    if (isAM)
    {
        if (h == "12")
        {
            res = "00:" + m + ":" + sc;
        }
        else
        {
            res = h + ":" + m + ":" + sc;
        }
    }
    else
    {
        if (h == "12")
        {
            res =h + ":" + m + ":" + sc;
        }
        else
        {
            stringstream ss;
            ss << h;
            int x;

            ss >> x;
            x += 12;
            ss.clear();
            ss << x;
            ss >> h;

            res += h + ":" + m + ":" + sc;
        }
    }
    return res;
}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);
    cout << result;
    return 0;
}
