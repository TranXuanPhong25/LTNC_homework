#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if(n==1){
        printf("one");
    }
    if(n==2){
        printf("two");
    }
    if(n==3){
        printf("three");
    }
    if(n==4){
        printf("four");
    }
    if(n==5){
        printf("five");
    }
    if(n==6){
        printf("six");
    }
    if(n==7){
        printf("seven");
    }
    if(n==8){
        printf("eight");
    }
    if(n==9){
        printf("nine");
    }
    if(n>9){
        printf("Greater than 9");
    }

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
