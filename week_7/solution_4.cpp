#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<string> extractWords(string words)
{
    vector<string> res;
    stringstream ss(words);
    char temp;
    string str;

    while (ss >> temp)
    {
        str += temp;
        if (ss.peek() == ';')
        {
            res.push_back(str);
            str = "";
            ss.ignore();
        }
    }
    res.push_back(str);
    return res;
}

vector<string> fillRow(vector<string> crosswords, int row, int x, string word, bool &canFill)
{
    vector<string> backup = crosswords;
    for (int i = 0; i < static_cast<int>(word.length()); i++)
    {
        if (crosswords[row][i + x] == '-' || crosswords[row][i + x] == word[i])
        {
            crosswords[row][i + x] = word[i];
        }
        else
        {
            canFill = false;
            return backup;
        }
    }
    return crosswords;
}
vector<string> fillColumn(vector<string> crosswords, int col, int x, string word, bool &canFill)
{
    vector<string> backup = crosswords;
    for (int i = 0; i < static_cast<int>(word.length()); i++)
    {
        if (crosswords[i + x][col] == '-' || crosswords[i + x][col] == word[i])
        {
            crosswords[i + x][col] = word[i];
        }
        else
        {
            canFill = false;
            return backup;
        }
    }
    return crosswords;
}


void fillWords(vector<string> crosswords, vector<string> words, int index,vector<string>&res)
{
    static int h = crosswords.size();
    static int w = crosswords[0].size();
    
    if (index == static_cast<int>(words.size()))
    {
        res = crosswords;
        return;
    }

    int len =static_cast<int>(words[index].length());

    for (int i = 0; i < h; i++)
    {
        //w-len ensure that we have enough space for the words
        for (int j = 0; j <= w-len; j++)
        {
            if (crosswords[i][j] != '+')
            {
                bool canFillHorizontal = true;
                vector<string> temp = fillRow(crosswords, i, j, words[index], canFillHorizontal);
                if (canFillHorizontal)
                {
                    fillWords(temp, words, index + 1,res);
                }
            }
        }
    }
    for (int i = 0; i < w; i++)
    {
        //h-len ensure that we have enough space for the words
        for (int j = 0; j <= h-len; j++)
        {
            if (crosswords[j][i] != '+' )
            {
                bool canFillVertical = true;
                vector<string> temp = fillColumn(crosswords, i, j, words[index], canFillVertical);
                if (canFillVertical)
                {
            
                    fillWords(temp, words, index + 1,res);
                }
            }
        }
    }
}

vector<string> crosswordPuzzle(vector<string> crossword, string words)
{
    //idea from geeksforgeeks: https://www.geeksforgeeks.org/solve-crossword-puzzle/ 
    
    vector<string> vWords = extractWords(words);
    fillWords(crossword, vWords, 0,crossword); //we will pass the 2nd crossword to modify it through backtracking
    return crossword;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<string> crossword(10);

    for (int i = 0; i < 10; i++) {
        string crossword_item;
        getline(cin, crossword_item);

        crossword[i] = crossword_item;
    }

    string words;
    getline(cin, words);

    vector<string> result = crosswordPuzzle(crossword, words);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
