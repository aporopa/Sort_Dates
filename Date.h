#ifndef DATE_H_
#define DATE_H_

#include <string>

class Date{
    private:
        //default private variables
        int month = 1;
        int day = 1;
        int year = 1900;

        public:
            Date() = default;
            Date(int m, int d, int y);

            //getter
            const int getMonth();
            const int getDay();
            const int getYear();

            //setter
            void setMonth(int);
            void setDay(int);
            void setYear(int);

            //operational functions for input data
            static const std::string MONTHS[12]; 
            std::string print();
            static bool compare(const Date, const Date);
};


#endif