class Counter {
    private:
        int count;
    
    public:
        // Constructor untuk inisialisasi counter
        Counter() {
            count = 0;
        }
    
        // Menambah counter
        void increment() {
            count++;
        }
    
        // Mendapatkan nilai counter saat ini
        int getCount() {
            return count;
        }
    };