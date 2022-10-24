#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include "Date.h"

using namespace std;

int main(int argc, char const *argv[]){
    int inputM, inputD, inputY;
    int max;
    vector<Date> calendar;
    string str;
    Date arb;

    ifstream userInput;
    userInput.open(argv[1], ios::in);
    //ofstream userOutput;
    //userOutput.open(argv[2]);

    userInput >> max;
    for(int i = 0; i < static_cast<int> (max); i++){
        userInput >> inputM;
        userInput >> inputD;
        userInput >> inputY;
        Date arb(inputM, inputD, inputY);
        calendar.push_back(arb);
    }


    sort(calendar.begin(), calendar.end(), Date::compare);

    for(int i = 0; i < static_cast<int>(max); i++){
        cout << calendar.at(i).print() << endl;
    }
    
    //cout << 

    userInput.close();
    //userOutput.close();

    return 0;
}