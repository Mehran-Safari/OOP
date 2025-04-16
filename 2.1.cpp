#include <iostream>

class Person {
protected:
    std::string name;
    int age;

public:
    std::string GetName() {
        return name;
    }

    int GetAge() {
        return age;
    }
};

class Student : protected Person {
private:
    double gpa; 

public:
    double GetGPA() {
        return gpa;
    }

    std::string GetStudentName() {
        return name; 
    }

    void SetDetails(std::string n, int a, double g) {
        name = n; 
        age = a;   
        gpa = g;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    double GetSalary() {
        return salary;
    }

    void SetDetails(std::string n, int a, double s) {
        name = n; 
        age = a;  
        salary = s;
    }
};

int main() {
    Student student;
    student.SetDetails("Alice", 20, 3.5);
    std::cout << "Student Name: " << student.GetStudentName() << std::endl;

    Teacher teacher;
    teacher.SetDetails("Bob", 40, 50000);
    std::cout << "Teacher Name: " << teacher.GetName() << std::endl;
    std::cout << "Teacher Age: " << teacher.GetAge() << std::endl;
    std::cout << "Teacher Salary: " << teacher.GetSalary() << std::endl;

    return 0;
}
