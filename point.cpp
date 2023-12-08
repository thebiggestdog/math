#include "point.h"

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x)
    : x { x }, y { 0 } {
}

Point::Point(int x, int y)
    : x { x }, y { y } {
}