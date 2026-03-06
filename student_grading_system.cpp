#include <iostream>
#include <string>

using namespace std;

/**
 * Project: Student Grading System
 * Description: A simple C++ program to calculate average marks and assign grades.
 * Author: Tanzila-Bithi
 */

int main() {
    string studentName;
    int totalSubjects;
    float currentMarks, sum = 0;

    cout << "=== Welcome to Student Grading System ===" << endl;
    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "How many subjects? ";
    cin >> totalSubjects;

    // Loop to collect marks for each subject
    for (int i = 1; i <= totalSubjects; ++i) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> currentMarks;
        sum += currentMarks;
    }

    float average = sum / totalSubjects;

    // Displaying the results
    cout << "\n-----------------------------" << endl;
    cout << "Student Performance Report" << endl;
    cout << "-----------------------------" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Average Score: " << average << endl;

    // Logical conditions for grading
    if (average >= 80) {
        cout << "Final Grade: A+" << endl;
    } else if (average >= 70) {
        cout << "Final Grade: A" << endl;
    } else if (average >= 60) {
        cout << "Final Grade: B" << endl;
    } else {
        cout << "Final Grade: Fail (Keep Trying!)" << endl;
    }
    cout << "-----------------------------" << endl;

    return 0;
}
