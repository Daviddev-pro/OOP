#include<iostream>
#include<iomanip>
using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;

        int daysInMonth(){
            if(month==2){
                return isLeapYear() ? 29 : 28;
            }
            if(month==4 || month==6 || month==9 || month==11){
                return 30;
            }
            return 31;
        }
    public:
        Date(int day = 1, int month = 1, int year = 1900) : day(day), month(month), year(year) {}

        void show(){
            cout << setfill('0') << setw(2) << day << "/"
                 << setfill('0') << setw(2) << month << "/"
                 << year << endl;
        }

        void update(int d, int m, int y){
            day+=d;
            while (day > daysInMonth())
            {
                day -= daysInMonth();
                month++;
            }
            month += m;
            while (month > 12)
            {
                month -= 12;
                year++;
            }
            year += y;
        }
        bool isLeapYear(){
            return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
        }

        static int daysBetween(Date d1, Date d2){
            return (d2.year - d1.year) * 365 + (d2.month - d1.month) * 30 + (d2.day - d1.day);
        }
};