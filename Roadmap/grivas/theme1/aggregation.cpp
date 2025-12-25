// Range-Based
vector<int> numbers = {10, 20, 5, 40};

for (int num : numbers) {
    cout << num << " ";
}

// Finding the sum / Accumulator
double sum = 0; // Initialize accumulator

for (double grade : grades) {
    sum = sum + grade; // Add each item to total
}

// Finding Min/Max
double maxVal = grades[0]; // Assume first is max

for (double grade : grades) {
    if (grade > maxVal) {
        maxVal = grade; // Update max if found a bigger one
    }
}
