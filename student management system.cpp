#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[50];
    float grade;
};

void addStudent() {
    Student s;
    ofstream outFile("students.txt", ios::app | ios::binary);

    cout << "Enter student ID: ";
    cin >> s.id;
    cin.ignore();
    cout << "Enter student name: ";
    cin.getline(s.name, 50);
    cout << "Enter grade: ";
    cin >> s.grade;

    outFile.write(reinterpret_cast<char*>(&s), sizeof(s));
    outFile.close();

    cout << "Student record added.\n";
}

void displayStudents() {
    Student s;
    ifstream inFile("students.txt", ios::binary);

    if (!inFile) {
        cout << "No records found.\n";
        return;
    }

    cout << "\nAll Students:\n";
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        cout << "ID: " << s.id << ", Name: " << s.name << ", Grade: " << s.grade << endl;
    }

    inFile.close();
}

void deleteStudent() {
    int delId;
    cout << "Enter ID to delete: ";
    cin >> delId;

    ifstream inFile("students.txt", ios::binary);
    ofstream tempFile("temp.txt", ios::binary);

    Student s;
    bool found = false;

    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        if (s.id != delId) {
            tempFile.write(reinterpret_cast<char*>(&s), sizeof(s));
        } else {
            found = true;
        }
    }

    inFile.close();
    tempFile.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Student deleted.\n";
    else
        cout << "Student not found.\n";
}

void updateStudent() {
    int upId;
    cout << "Enter ID to update: ";
    cin >> upId;

    fstream file("students.txt", ios::in | ios::out | ios::binary);
    Student s;
    bool found = false;

    while (!file.eof() && file.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        if (s.id == upId) {
            cout << "Enter new name: ";
            cin.ignore();
            cin.getline(s.name, 50);
            cout << "Enter new grade: ";
            cin >> s.grade;

            file.seekp(-static_cast<int>(sizeof(s)), ios::cur);
            file.write(reinterpret_cast<char*>(&s), sizeof(s));
            found = true;
            break;
        }
    }

    file.close();

    if (found)
        cout << "Student updated.\n";
    else
        cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Student Management Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Delete Student\n";
        cout << "4. Update Student\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: deleteStudent(); break;
            case 4: updateStudent(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
