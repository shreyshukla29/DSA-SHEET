#include <bits/stdc++.h>
using namespace std;

bool isValid(const string &word, const vector<string> &dictionary) {
    return find(dictionary.begin(), dictionary.end(), word) != dictionary.end();
}

// Backtracking function to find all possible sentences
void f(const string &s, const vector<string> &dictionary, string ans, int idx, vector<string> &sol) {
    if (idx == s.size()) {
        sol.push_back(ans);
        return;
    }

    string word = "";
    for (int i = idx; i < s.size(); ++i) {
        word.push_back(s[i]);
        if (isValid(word, dictionary)) {
            string new_ans = ans;
            if (!ans.empty()) {
                new_ans += " ";
            }
            new_ans += word;
            f(s, dictionary, new_ans, i + 1, sol);
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string> sol;

    string ans="";
    f(s,dictionary,ans,0,sol);
    return sol;



}