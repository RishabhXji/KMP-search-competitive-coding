//kmp 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> buildlps(string pat) {

    int M = pat.length();
    vector<int> lps(M);
    int len = 0; // length of the previous longest prefix suffix
    lps[0] = 0; // lps[0] is always 0

    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
//kmp search function
vector<int> kmpSearch(string txt, string pat) {
    int N = txt.length();
    int M = pat.length();
    vector<int> lps = buildlps(pat);
    vector<int> res;
    int i = 0; // index for txt
    int j = 0; // index for pat
    while (i < N) {
        if (pat[j] == txt[i]) {
            i++;
            j++;
        }
        if (j == M) {
            cout << "Found pattern at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return res;
}

int main() {
    string txt = "ababcababaad";
    string pat = "ababa";
    kmpSearch(txt, pat);
    return 0;
}   