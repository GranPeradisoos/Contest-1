#include <bits/stdc++.h>

using namespace std;

int main() {
    string username;
    cin >> username;

    unordered_set<char> distinctCharacters;
    for (char c : username) {
        distinctCharacters.insert(c);
    }

    if (distinctCharacters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
