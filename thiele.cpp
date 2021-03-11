#include <vector>
#include "thiele.hpp"
 
double p(const std::vector<double> &x, const std::vector<double> &y, std::vector<double> &r, int i, unsigned int n, unsigned int N) {
    if (n < 0)
        return 0;
    if (!n)
        return y[i];
 
    unsigned int idx = (N - 1 - n) * (N - n) / 2 + i;
    if (r[idx] != r[idx])
        r[idx] = (x[i] - x[i + n]) / (p(x, y, r, i, n - 1,N) - p(x, y, r, i + 1, n - 1,N)) + p(x, y, r, i + 1, n - 2,N);
    return r[idx];
}
 
double thiele(const std::vector<double> &x, const std::vector<double> &y,std::vector<double> &r, double xin, unsigned int n, unsigned int N){
    return n > N - 1 ? 1. : p(x, y, r, 0, n,N) - p(x, y, r, 0, n - 2,N) + (xin - x[n]) / thiele(x, y, r, xin, n + 1,N);
}
