#include <cmath> // Untuk fungsi sqrt()

class Point {
private:
    double x;
    double y;

public:
    // Constructor untuk inisialisasi titik
    Point(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Menghitung jarak dari titik asal (0, 0)
    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }
};