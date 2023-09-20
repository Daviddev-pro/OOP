#include <iostream>
#include <iomanip>
using namespace std;

class Time{
  private:
    int hour;
    int minute;
    int second;
  public:
    Time(int hour = 0, int minute = 0, int second = 0){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }  
    int getHour(){
        return hour;
    }
    int getMinute(){
        return minute;
    }
    int getSecond(){
        return second;
    }
    void display(){
        cout << setfill('0') << setw(2) << hour << ":"<< setfill('0') << setw(2) << minute << ":" << setfill('0') <<setw(2) << second << endl;
    }
    void update(int h, int m, int s){
        second += s;
        minute += m + (second / 60);
        hour += h + (minute / 60);
        second %= 60;
        minute %= 60;
        hour %= 24;
    }
    bool isValid(){
            return hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60;
        }
};