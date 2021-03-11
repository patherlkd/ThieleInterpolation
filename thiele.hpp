#ifndef THIELE_H
#define THIELE_H

#include <vector>

// For reciprocral difference
double p(const std::vector<double> &x, const std::vector<double> &y, std::vector<double> &r, int i, unsigned int n, unsigned int N);

// Theile intepolation 
double thiele(const std::vector<double> &x, const std::vector<double> &y, std::vector<double> &r, double xin, unsigned int n, unsigned int N);

#endif