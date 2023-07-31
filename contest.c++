#include <bits/stdc++.h>

using namespace std;

int calculatePoints(int problemCost, int minutes) {
    return max(3 * problemCost / 10, problemCost - problemCost / 250 * minutes);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mishaPoints = calculatePoints(a, c);
    int vasyaPoints = calculatePoints(b, d);

    if (mishaPoints > vasyaPoints) {
        cout << "Misha" << endl;
    } else if (mishaPoints < vasyaPoints) {
        cout << "Vasya" << endl;
    } else {
        cout << "Tie" << endl;
    }

    return 0;
}
