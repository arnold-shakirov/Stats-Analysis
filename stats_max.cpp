#include "stats_max.h"
#include <limits>
using namespace std;

stats_max::stats_max() {
    max = numeric_limits<double>::min();
}

void stats_max::add(double val) {
    if (val > max) {
        max = val;
    }
}

double stats_max::result() {
    return max;
}

void stats_max::reset() {
    max = numeric_limits<double>::min();
}
