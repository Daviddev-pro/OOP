#include "Point.cpp"

class Line{
    private:
        Point start_point;
        Point end_point;
    public:
        Line(Point start_point, Point end_point){
            this->start_point = start_point;
            this->end_point = end_point;
        }
        double distance(){
            return start_point.distanceOfPoint(end_point);
        }
        bool contains(Point p){
            double total_distance = distance();
            double distance1 = start_point.distanceOfPoint(p);
            double distance2 = end_point.distanceOfPoint(p);
            return abs(total_distance - distance1 - distance2) < 1e-7;
        }
        void show(){
            cout << "Start point: " << start_point.getX() << ", " << start_point.getY() << endl;
            cout << "End point: " << end_point.getX() << ", " << end_point.getY() << endl;
        }
};