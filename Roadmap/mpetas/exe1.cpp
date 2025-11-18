#include <iostream>
using namespace std;

int main() {
    int menu;
    int subMenu;
    double value;
    double answer;
    string last = "None";
    char again = 'y';

    cout<<"=== Simple Unit Converter ===\n";

    while(again=='y' || again=='Y')
    {
        cout<<"\nChoose main category:\n";
        cout<<"1. Temperature\n";
        cout<<"2. Distance\n";
        cout<<"3. Time\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>menu;
        if(menu==1){
            cout<<"\nTemperature conversions:\n";
            cout<<"1. Celsius to Fahrenheit\n";
            cout<<"2. Fahrenheit to Celsius\n";
            cout<<"3. Celsius to Kelvin\n";
            cout<<"Your choice: ";
            cin>>subMenu;
            cout<<"Enter value: ";
            cin>>value;
            if(subMenu==1){
                answer = (value * 9.0 / 5.0) + 32;
                cout<<value<<" C = "<<answer<<" F\n";
                last = "C to F";
            }
            if(subMenu==2){
                answer = (value - 32) * 5.0 / 9.0;
                cout<<value<<" F = "<<answer<<" C\n";
                last = "F to C";
            }
            if(subMenu==3){
                answer = value + 273.15;
                cout<<value<<" C = "<<answer<<" K\n";
                last = "C to K"; 
            }
        }
        if(menu==2){
            cout<<"\nDistance conversions:\n";
            cout<<"1. Meters to Kilometers\n";
            cout<<"2. Kilometers to Miles\n";
            cout<<"3. Miles to Feet\n",
            cout<<"Choice: ";
            cin>>subMenu;
            cout<<"Enter value: ";
            cin>>value;
            if(subMenu==1){
                double tempValue = value; 
                answer = tempValue/ 1000.0;
                cout<<tempValue<<" m = "<<answer<<" km\n";
                last = "m to km";
            }
            if(subMenu==2){
                double tempValue2 = value;
                answer = tempValue2 * 0.621371;
                cout<<tempValue2<<" km = "<<answer<<" miles\n";
                last = "km to miles";
            }
            if(subMenu==3){
                double tempValue3 = value;
                answer = tempValue3 * 5280;
                cout<<tempValue3<<" miles = "<<answer<<" feet\n";
                last = "miles to feet";
            }
        }
        if(menu==3){
            cout<<"\nTime conversions:\n";
            cout<<"1. Seconds to Minutes\n";
            cout<<"2. Minutes to Hours\n";
            cout<<"3. Hours to Seconds\n";
            cout<<"Pick: ";
            cin>>subMenu;
            cout<<"Enter value: ";
            cin>>value;
            if(subMenu==1){
                answer = value / 60;
                cout<<value<<" sec = "<<answer<<" min\n";
                last = "sec to min";
            }
            if(subMenu==2){
                answer = value / 60;
                cout<<value<<" min = "<<answer<<" hr\n";
                last = "min to hr";
            }
            if(subMenu==3){
                answer = value * 3600;
                cout<<value<<" hr = "<<answer<<" sec\n";
                last = "hr to sec";
            }
        }
        if(menu==4){
            cout<<"Exiting...\n";
            break;
        }
        cout<<"\nDo you want to convert again? (y/n): ";
        cin>>again;
    }
    cout<<"\nLast conversion type was: "<<last<<"\n";
    return 0;
}
