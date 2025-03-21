class Rectangle {
    private:
        double length;
        double width;
    
    public:
        // Constructor untuk inisialisasi panjang dan lebar
        Rectangle(double l, double w) {
            length = l;
            width = w;
        }
    
        // Menghitung luas
        double area() {
            return length * width;
        }
    };