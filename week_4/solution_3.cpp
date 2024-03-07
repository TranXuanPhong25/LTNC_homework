#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int palindromeIndex(string s) {
    int len = s.length();
    string temp ;
    // for (int i =0;i<len/2; i++) {
    //     if(s[i]!=s[len-i-1]){
    //         temp = s.substr(0,i)+s.substr(i+1,len-i-1);
    //         cout<<temp<<endl;
    //     }
    // }
    for (int i =len-1;i>=0;i--) {
         if(s[i]!=s[len-i-1]){
             if (i==len-1) {
                 temp=s.substr(0,len-1);
             }else temp =s.substr(0,i)+s.substr(i+1,len-i-1);
            // cout<<temp<<endl;
            int tLen= temp.length();
            bool isFound = true;
            for (int i =0 ; i<tLen; i++) {
                if(temp[i]!=temp[tLen-i-1]){
                    isFound =false;
                    break;
                }
            }
            if(isFound) return i;
        }
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

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
