#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Converter{

public:

    void notice();
    void temp_conv();
    void dist_conv();
    void time_conv();
    bool isNumeric(const string& str);
};

int main(){
    
    Converter c;

    int pick;

    while(1){

        system("clear");
        cout <<"--- Universal Unit Converter ---\n" << endl;
        cout <<"Choose a conversion type:"<< endl;
        cout <<"1. Temperature\n2. Distance\n3. Time\n4. Exit\n"<< endl;
        cin >> pick;
        cout << "\n";

        switch (pick){

            case 1:
                system("clear");
                c.temp_conv();
                this_thread::sleep_for(chrono::seconds(3));
                break;
        
            case 2:
                system("clear");
                c.dist_conv();
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 3:
                system("clear");
                c.time_conv();
                this_thread::sleep_for(chrono::seconds(3));
                break;

            case 4:
                system("clear");
                exit(0);
                break;

            default:
                system("clear");
                cout<<"Ivalid choice, please type a number from 1 to 4"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                break;
        }
    }    
}

void Converter::notice(){

    system("clear");
    cout<<"Invalid input, please type a number."<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    system("clear");
}

void Converter::temp_conv(){

    int pick;
    float value;
    float result;
    string input;

    cout <<"1. Celsius → Fahrenheit\n2. Fahrenheit → Celsius\n3. Celsius → Kelvin\n4. Kelvin → Celsius\n"<<endl;
    cin >> pick;
    cout << "\n";

    switch (pick){

        case 1:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = (9*value/5)+32;
                    cout<<result;
                    cout<<" F°"<<endl;
                    cout << "\n";
                    }
                    else{
                        notice();
                    }
            }while(isNumeric(input) == false);
            break;         
    
        case 2:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = (value - 32)/1.8;
                    cout<<result;
                    cout<<" C°"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        case 3:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value + 273.15;
                    cout<<result;
                    cout<<" K°"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        case 4:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value - 273.15;
                    cout<<result;
                    cout<<" C°"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        default:
                system("clear");
                cout<<"Ivalid choice, please type a number from 1 to 4."<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                system("clear");
                temp_conv();
    }

}

void Converter::dist_conv(){

    int pick;
    float value;
    float result;
    string input;

    cout <<"1. m → km\n2. km → m\n3. km → miles\n4. miles → km\n"<<endl;
    cin >> pick;
    cout << "\n";

    switch (pick){

        case 1:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value/1000;
                    cout<<result;
                    cout<<" km"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;
    
        case 2:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value*1000;
                    cout<<result;
                    cout<<" m"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        case 3:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value*0.621371;
                    cout<<result;
                    cout<<" miles"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        case 4:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value*1.60934;
                    cout<<result;
                    cout<<" km"<<endl;
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        default:
                system("clear");
                cout<<"Ivalid choice, please type a number from 1 to 4"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                system("clear");
                dist_conv();
    }

}

void Converter::time_conv(){

    int pick;
    float value;
    float result;
    string input;

    cout <<"1. Seconds → Minutes\n2. Minutes → Hours\n3. Hours → Minutes\n4. Hours → Seconds\n"<<endl;
    cin >> pick;
    cout << "\n";

    switch (pick){

        case 1:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value/60;
                    cout<<result;
                    
                    if(result == 1){
                        cout<<" minute"<<endl;
                    }
                    else{
                        cout<<" minutes"<<endl;
                    }
                    cout << "\n";
                }
                else{
                    notice();
                } 
            }while(isNumeric(input) == false);
            break;
    
        case 2:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value/60;
                    cout<<result;
                    
                    if(result == 1){
                        cout<<" hour"<<endl;
                    }
                    else{
                        cout<<" hours"<<endl;
                    }
                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        case 3:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value*60;
                    cout<<result;

                    if(result == 1){
                        cout<<" minute"<<endl;
                    }
                    else{
                        cout<<" minutes"<<endl;
                    }

                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        case 4:
            do{
                system("clear");
                cout<<"Enter value: "<<endl;
                cin >> input;
                if(isNumeric(input)){
                    float value = std::stof(input);
                    cout << "\n";
                    result = value*3600;
                    cout<<result;

                    if(result = 1){
                        cout<<" second"<<endl;
                    }
                    else{
                        cout<<" seconds"<<endl;
                    }

                    cout << "\n";
                }
                else{
                    notice();
                }
            }while(isNumeric(input) == false);
            break;

        default:
                system("clear");
                cout<<"Ivalid choice, please type a number from 1 to 4"<<endl;
                this_thread::sleep_for(chrono::seconds(2));
                system("clear");
                time_conv();

    }
}

bool Converter::isNumeric(const string& str){

    for (char ch : str){
        if (!isdigit(ch)){
            return false;
        }
    }
    return true;
}
