#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int g(int n) {
    if (n < 10) {
        return n;
    }
    return g(sumOfDigits(n));
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        int result = g(n);
        cout << result << endl;
    }
    return 0;
}
