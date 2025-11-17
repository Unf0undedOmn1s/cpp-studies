#include <iostream>
#include <functional>
#include <vector>
#include <limits>

using namespace std;

void print() {
    cout << "--- Universal Unit Converter ---" << endl;
    cout << "Choose a conversion type: " << endl;
    cout << "1. Temprature" << endl;
    cout << "2. Distance" << endl;
    cout << "3. Time" << endl;
    cout << "4. Exit" << endl;
}

void print_temprature() {
    cout << "1. Celsius -> Fahrenheit" << endl;
    cout << "2. Fahrenheit -> Celsius" << endl;
    cout << "3. Celsius -> Kelvin" << endl;
    cout << "4. Kelvin -> Celsius" << endl;
    cout << "5. Fahrenheit -> Kelvin" << endl;
    cout << "6. Kelvin -> Fahrenheit" << endl;
}

void print_distance() {
    cout << "1. Meters -> Kilometers" << endl;
    cout << "2. Kilometers -> Meters" << endl;
    cout << "3. Meters -> Miles" << endl;
    cout << "4. Miles -> Meters" << endl;
    cout << "5. Kilometers -> Miles" << endl;
    cout << "6. Miles -> Kilometers" << endl;
    cout << "7. Meters -> Feet" << endl;
    cout << "8. Feet -> Meters" << endl;
    cout << "9. Kilometers -> Feet" << endl;
    cout << "10. Feet -> Kilometers" << endl;
    cout << "11. Miles -> Feet" << endl;
    cout << "12. Feet -> Miles" << endl;
}

void print_time() {
    cout << "1. Seconds -> Minutes" << endl;
    cout << "2. Minutes -> Seconds" << endl;
    cout << "3. Seconds -> Hours" << endl;
    cout << "4. Hours -> Seconds" << endl;
    cout << "5. Minutes -> Hours" << endl;
    cout << "6. Hours -> Minutes" << endl;
}

vector<function<double(double)>> temperatureActions = {
    [](double c){ return c * 9.0/5.0 + 32; },
    [](double f){ return (f - 32) * 5.0/9.0; },
    [](double c){ return c + 273.15; },
    [](double k){ return k - 273.15; },
    [](double f){ return (f - 32) * 5.0/9.0 + 273.15; },
    [](double k){ return (k - 273.15) * 9.0/5.0 + 32; }
};

vector<function<double(double)>> distanceActions = {
    [](double m){ return m / 1000.0; },
    [](double km){ return km * 1000.0; },
    [](double m){ return m / 1609.344; },
    [](double mi){ return mi * 1609.344; },
    [](double km){ return km / 1.609344; },
    [](double mi){ return mi * 1.609344; },
    [](double m){ return m * 3.280839895; },
    [](double ft){ return ft / 3.280839895; },
    [](double km){ return km * 3280.839895; },
    [](double ft){ return ft / 3280.839895; },
    [](double mi){ return mi * 5280.0; },
    [](double ft){ return ft / 5280.0; }
};

vector<function<double(double)>> timeActions = {
    [](double s){ return s / 60.0; },
    [](double m){ return m * 60.0; },
    [](double s){ return s / 3600.0; },
    [](double h){ return h * 3600.0; },
    [](double m){ return m / 60.0; },
    [](double h){ return h * 60.0; }
};

int main() {
    int choice,second_choice;
    double input,result;
    print();

    while (true) {
        cout << "Provide a choice: ";
        if (cin >> choice) {
            if (choice > 0 && choice<5)
                break;
            else
                cout << "Wrong input! Choose one of the options" << endl;
        }
        else {
            cout << "Wrong Input! Enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    if (choice == 1) {
        print_temprature();
        while (true) {
            cout << "Provide a choice: ";
            if (cin >> second_choice) {
                if (second_choice > 0 && second_choice<7)
                    break;
                else
                    cout << "Wrong input! Choose one of the options" << endl;
            }
            else {
                cout << "Wrong Input! Enter an integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        cout << "Provide the value: ";
        cin >> input;
        double result = temperatureActions[second_choice - 1](input);
        cout << "Value converted: " << result << endl;
    }
    else if (choice == 2) {
        print_distance();
        while (true) {
            cout << "Provide a choice: ";
            if (cin >> second_choice) {
                if (second_choice > 0 && second_choice<13)
                    break;
                else
                    cout << "Wrong input! Choose one of the options" << endl;
            }
            else {
                cout << "Wrong Input! Enter an integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        cout << "Provide the value: ";
        cin >> input;
        double result = distanceActions[second_choice - 1](input);
        cout << "Value converted: " << result << endl;
    }
    else if (choice == 3) {
        print_time();
        while (true) {
            cout << "Provide a choice: ";
            if (cin >> second_choice) {
                if (second_choice > 0 && second_choice<7)
                    break;
                else
                    cout << "Wrong input! Choose one of the options" << endl;
            }
            else {
                cout << "Wrong Input! Enter an integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        cout << "Provide the value: ";
        cin >> input;
        double result = timeActions[second_choice - 1](input);
        cout << "Value converted: " << result << endl;
    }
    else
        return 0;
}