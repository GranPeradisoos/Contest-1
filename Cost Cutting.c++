#include <bits/stdc++.h> // for min() and max()

using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
        int salary1, salary2, salary3;

        // Read the salaries of the three employees for this test case
        cin >> salary1 >> salary2 >> salary3;

        // Determine the minimum and maximum salaries
        int min_salary = min(salary1, min(salary2, salary3));
        int max_salary = max(salary1, max(salary2, salary3));

        // Find the remaining salary (salary of the person who survives)
        int remaining_salary = salary1 + salary2 + salary3 - min_salary - max_salary;

        // Output the result with case number
        cout << "Case " << caseNumber << ": " << remaining_salary << endl;
    }

    return 0;
}
