#pragma once
#include <set>
#include <utility>
#include <math.h>
#include <iostream>
#include <vector>
#include "const.h" 

using namespace std;

class Line
{
public:
	Line(double x1, double y1, double x2, double y2, int type);
	bool intersect(Line line2, vector<pair<double, double>>& intersections);
	double pointDistance(pair<double, double> point1, pair<double, double> point2);
	bool pointOnLine(pair<double, double> intersection);
	double x1;
	double y1;
	double x2;
	double y2;
	int type;
};

//bool intersect(Line line2, set<pair<double, double>>& intersections);