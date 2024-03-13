#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int sinterger;
    double sdouble;
    string sstring;
    // Read and save an integer, double, and String to your variables.
    cin >> sinterger >> sdouble;
    getline(cin, sstring);
    getline(cin, sstring);

    // Print the sum of both integer variables on a new line.
    cout << i + sinterger << endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision(1) << fixed << d + sdouble << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << "" << sstring;
    return 0;
}