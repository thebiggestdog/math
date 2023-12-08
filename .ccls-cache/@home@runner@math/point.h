#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x {};
    int y {};
public:
    Point();
    Point(int x);
    Point(int x, int y);
};

#endif