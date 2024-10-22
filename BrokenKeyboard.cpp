#include <iostream>
#include <set>
#include <string>
using namespace std;

string f_correctKeys(string s) {
    set<char> correctKeys;
    int left = 0;
    int right = 0;

    while (right < s.size()) {
        if (right + 1 < s.size() && s[right] == s[right + 1]) {
            right += 2;
        } else {
            correctKeys.insert(s[right]);
            right+=1;
        }
    }

    string result(correctKeys.begin(), correctKeys.end());
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << f_correctKeys(s) << endl;
    }

    return 0;
}