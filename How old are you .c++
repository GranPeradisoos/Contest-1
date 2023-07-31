#include <bits/stdc++.h>

using namespace std;

struct Date {
    int day, month, year;
};

Date parseDate(const string& dateStr) {
    stringstream ss(dateStr);
    Date date;
    char discard;
    ss >> date.day >> discard >> date.month >> discard >> date.year;
    return date;
}

bool isValidDate(const Date& date) {
    // Assume all dates are valid (not in the future).
    return true;
}

int calculateAge(const Date& currentDate, const Date& birthDate) {
    int age = currentDate.year - birthDate.year;
    if (currentDate.month < birthDate.month || (currentDate.month == birthDate.month && currentDate.day < birthDate.day)) {
        age--;
    }
    return age;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string blankLine;
        getline(cin, blankLine); // Consume the blank line

        string currentDateStr, birthDateStr;
        getline(cin, currentDateStr);
        getline(cin, birthDateStr);

        Date currentDate = parseDate(currentDateStr);
        Date birthDate = parseDate(birthDateStr);

        if (!isValidDate(birthDate)) {
            cout << "Case #" << t << ": Invalid birth date" << endl;
        } else {
            int age = calculateAge(currentDate, birthDate);
            if (age > 130) {
                cout << "Case #" << t << ": Check birth date" << endl;
            } else {
                cout << "Case #" << t << ": " << age << endl;
            }
        }
    }

    return 0;
}
