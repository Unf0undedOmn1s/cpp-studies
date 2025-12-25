// Bubblesort Algorithm
// Source: https://www.geeksforgeeks.org/cpp/bubble-sort-in-cpp/
// Integrated example from Gradebook from started.md -> cpp-studies/Roadmap/starter.md
int n = grades.size();
for (int i = 0; i < n - 1; i++) {       // Passes
    for (int j = 0; j < n - i - 1; j++) {   // Comparisons
        if (grades[j] > grades[j + 1]) {
            // Swap logic
            double temp = grades[j];
            grades[j] = grades[j + 1];
            grades[j + 1] = temp;
        }
    }
}
