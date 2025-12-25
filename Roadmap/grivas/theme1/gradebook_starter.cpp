// This is the Gradebook example from started.md in week 4.
// Source: https://www.geeksforgeeks.org/cpp/bubble-sort-in-cpp/
// Sorting Algorithm: Bubblesort | Idea form former Python Programs | Source: Προγραμματισμός Υπολογιστών Γ' ΕΠΑΛ Γιώργος Καρκαμάνης

#include <iostream>
#include <vector>

using namespace std;
int main() {
    // 1. Setup
    vector<double> grades;
    double input;

    cout << "Enter student grades (type -1 to stop):" << endl;

    // 2. Input Loop
    while (true) {
        cout << "Grade: ";
        cin >> input;
        if (input == -1) break;
        grades.push_back(input);
    }

    if (grades.empty()) {
        cout << "No grades entered." << endl;
        return 0;
    }

    // Sorting using Bubblesort
    int n = grades.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                double temp = grades[j];    // Store left value in a temp bucket
                grades[j] = grades[j + 1];  // Move right value to left
                grades[j + 1] = temp;       // Move temp (old left) to right
            }
        }
    }

    // 3. Sorted Output Results
    cout << "\n Sorted Grades (Lowest to Highest) ---" << endl;
    for (double grade : grades) {
        cout << grade << " ";
    }
    cout << endl;

    // The first item is now guaranteed to be the smallest
    cout << "Min Grade: " << grades[0] << endl;
    // The last item is now guaranteed to be the largest
    cout << "Max Grade: " << grades[n - 1] << endl;

    return 0;
}
