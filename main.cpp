#include "Gradebook.h"
#include <iostream>

int main() {
    GradeBook gb;
    gb.addGrade("Test", 85.0);
    gb.addGrade("Homework", 92.5);
    gb.addGrade("Project", 78.0);
    std::cout << "Average: " << gb.getAverage() << std::endl;
    std::cout << "Highest: " << gb.getHighest() << std::endl;
    std::cout << "Number of grades: " << gb.numGrades() << std::endl;
    return 0;
}