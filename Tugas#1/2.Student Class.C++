#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentID;
    char grade;

public:
    // Constructor untuk inisialisasi data
    Student(string n, string id, char g) {
        name = n;
        studentID = id;
        grade = g;
    }

    // Menampilkan informasi siswa
    void displayInfo() {
        cout << "Name: " << name << ", ID: " << studentID << ", Grade: " << grade << endl;
    }
};