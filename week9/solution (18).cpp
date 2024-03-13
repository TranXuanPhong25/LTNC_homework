#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int rDay, rMonth, rYear;
    int dDay, dMonth, dYear;
    int fine;

    cin >> rDay >> rMonth >> rYear;
    cin.ignore();

    cin >> dDay >> dMonth >> dYear;
    cin.ignore();

    if (rYear > dYear)
    {
        fine = 10000;
    }
    else if ((rYear == dYear) && (rMonth > dMonth))
    {
        fine = 500 * (rMonth - dMonth);
    }
    else if ((rYear == dYear) && (rMonth == dMonth) && (rDay > dDay))
    {
        fine = 15 * (rDay - dDay);
    }
    else
    {
        fine = 0;
    }
    cout << fine << endl;
    return 0;
}
