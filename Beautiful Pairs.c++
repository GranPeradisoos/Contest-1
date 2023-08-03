#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int beautifulPairs(vector<int>& A, vector<int>& B) {
    unordered_map<int, int> countA, countB;

    // Count occurrences of elements in arrays A and B
    for (int num : A) {
        countA[num]++;
    }
    for (int num : B) {
        countB[num]++;
    }

    int beautifulCount = 0;
    int commonCount = 0;

    // Find common elements between A and B
    for (const auto& [num, count] : countA) {
        if (countB.find(num) != countB.end()) {
            beautifulCount += min(count, countB[num]);
            commonCount += count;
        }
    }

    // If there are common elements, we can increase the beautiful count
    if (beautifulCount < A.size() || beautifulCount < B.size()) {
        return beautifulCount + 1;
    }
    // If all elements are common, we need to change one element to increase the beautiful count
    else {
        return beautifulCount - 1;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    int result = beautifulPairs(A, B);
    cout << result << endl;

    return 0;
}
