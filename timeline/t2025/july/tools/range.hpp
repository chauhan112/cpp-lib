#pragma once
#include <iostream>
#include <string>

struct RangePoint{
    double value;
    bool included = true;
    bool touches(RangePoint other) {
        return value == other.value && included && other.included;
    }
    bool isLess(RangePoint other) {
        return !touches(other) && value < other.value;
    }
    bool isGreater(RangePoint other) {
        return !touches(other) && value > other.value;
    }
};
struct Point{
    double x = 0;
    double y = 0;
};

struct Range
{
    RangePoint start;
    RangePoint end;

    bool isLess(Range other) {
        return end.isLess(other.start);
    }
    bool isGreater(Range other) {
        return start.isLess(other.end);
    }
    bool intersects(Range other) {
        return !isLess(other) && !isGreater(other);
    }
    std::string toString() {
        std::string res = "";
        if (start.included) res += "[";
        else res += "(";
        res += std::to_string(start.value) + ", " +  std::to_string(end.value);
        if (end.included) res += "]";
        else res += ")";
        return res;
    }
    bool liesWithin(double p) {
        RangePoint point = {p};
        return (point.touches(start) || point.isGreater(start)) && (point.touches(end) || point.isLess(end));
    }
};
