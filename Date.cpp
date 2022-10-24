#include "Date.h"
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Date::Date(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

//getter functions
const int Date::getMonth(){
    return month;
}

const int Date::getDay(){
    return day;
}

const int Date::getYear(){
    return year;
}

//setter functions
void Date::setMonth(int ms){
    month = ms;
}

void Date::setDay(int ds){
    day = ds;
}

void Date::setYear(int ys){
    year = ys;
}

const string Date::MONTHS[12] {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

string Date::print(){
    stringstream output;
    string name;

    name = MONTHS[month - 1];

    output << left << setw(10) << name;
    output << left << setw(3) << day;
    output << left << setw(5) << year;

    return output.str();
}

bool Date::compare(const Date date1, const Date date2){
    bool validate = false;
    if(date1.year < date2.year){
        validate = true;
    }

    else if(date1.year == date2.year){
        if(date1.month == date2.month){
            if(date1.day <= date2.day){
                validate = true;
            }
        }
        else if(date1.month < date2.month){
            validate = true;
        }
    }

    return validate;
}