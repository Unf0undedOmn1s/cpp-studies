#include <iostream>
#include <iomanip> // For setprecision (Formatting for float values)
// Websites/References used for this code:
// https://www.geeksforgeeks.org/cpp/iomanip-setprecision-function-in-c-with-examples/
// https://www.w3schools.com/cpp/
// https://www.cplusplus.com/
// https://www.programiz.com/cpp-programming/online-compiler/

using namespace std;

int main() {
    int choice = 0;  

    float x = 0; // Input
    float y = 0; // Result
    string last = ""; // Storing Last Conversion
    cout << fixed << setprecision(2);

    while (choice != 4) {
        cout << "\nUniversal Unit Converter\n";
        cout << "1. Temperature\n";
        cout << "2. Distance\n";
        cout << "3. Time\n";
        cout << "4. Exit\n";
        cout << "> ";
        cin >> choice;

        // Temperature Conversions
        if (choice == 1) {
            cout << "\nTemperature:\n";
            cout << "1 = Celsius to Fahrenheit\n";
            cout << "2 = Fahrenheit to Celsius\n";
            cout << "3 = Celsius to Kelvin\n";
            cout << "4 = Kelvin to Celsius\n";
            cout << "> ";

            int t; 
            cin >> t;

            cout << "Enter value: ";
            cin >> x;

            if (t == 1) {
                // Celsius to Fahrenheit
                y = (x * 9.0 / 5.0) + 32.0;
                last = to_string(x) + " C = " + to_string(y) + " F";
                cout << last << endl;
            }
            else if (t == 2) {
                // Fahrenheit to Celsius
                y = (x - 32.0) * 5.0 / 9.0;
                last = to_string(x) + " F = " + to_string(y) + " C";
                cout << last << endl;
            }
            else if (t == 3) {
                // Celsius to Kelvin
                y = x + 273.15;
                last = to_string(x) + " C = " + to_string(y) + " K";
                cout << last << endl;
            }
            else if (t == 4) {
                // Kelvin to Celsius
                y = x - 273.15;
                last = to_string(x) + " K = " + to_string(y) + " C";
                cout << last << endl;
            }
            else {
                cout << "Invalid.\n";
            }
        }

        // Distance Conversions
        else if (choice == 2) {
            cout << "\nDistance:\n";
            cout << "1 = Meters to Kilometers\n";
            cout << "2 = Kilometers to Miles\n";
            cout << "3 = Miles to Feet\n";
            cout << "> ";

            int d;
            cin >> d;

            cout << "Enter value: ";
            cin >> x;

            if (d == 1) {
                // Meters to Kilometers
                y = x / 1000.0;
                last = to_string(x) + " m = " + to_string(y) + " km";
                cout << last << endl;
            }
            else if (d == 2) {
                // Kilometers to Miles
                y = x * 0.621371;
                last = to_string(x) + " km = " + to_string(y) + " miles";
                cout << last << endl;
            }
            else if (d == 3) {
                // Miles to Feet
                y = x * 5280.0;
                last = to_string(x) + " miles = " + to_string(y) + " ft";
                cout << last << endl;
            }
            else {
                cout << "Invalid.\n";
            }
        }

        // Time Conversions
        else if (choice == 3) {
            cout << "\nTime:\n";
            cout << "1 = Secs to Mins\n";
            cout << "2 = Mins to Hrs\n";
            cout << "3 = Hrs to Seconds\n";
            cout << "> ";

            int t2;
            cin >> t2;

            cout << "Enter value: ";
            cin >> x;

            if (t2 == 1) {
                // Secs to Mins
                y = x / 60.0;
                last = to_string(x) + " sec = " + to_string(y) + " min";
                cout << last << endl;
            }
            else if (t2 == 2) {
                // Mins to Hrs
                y = x / 60.0;
                last = to_string(x) + " min = " + to_string(y) + " hr";
                cout << last << endl;
            }
            else if (t2 == 3) {
                // Hrs to Seconds
                y = x * 3600.0;
                last = to_string(x) + " hr = " + to_string(y) + " sec";
                cout << last << endl;
            }
            else {
                cout << "Invalid.\n";
            }
        }

        // Exiting
        else if (choice == 4) {
            cout << "\nGoodbye.\n";
        }

        // Error correction for main menu
        else {
            cout << "Invalid option.\n";
        }

        if (last != "") { 
            cout << "\nLast conversion:\n" << last << endl;
        }
    }
    return 0;
}
