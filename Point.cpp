#include<iostream>
#include<cmath>
using namespace std;

class Point{
    private:
        double x; // Tọa độ x
        double y; // Tọa độ y
    public:
        // Hàm khởi tạo
        Point(double x = 0, double y = 0){
            this->x = x;
            this->y = y;
        }
        // Hàm tính khoảng cách từ điểm này đến một điểm khác
        double distanceOfPoint(Point p){
            return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
        }
        // Hàm hiển thị tọa độ của điểm
        void show(){
            cout << "X: " << x << ", Y: " << y << endl;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
};