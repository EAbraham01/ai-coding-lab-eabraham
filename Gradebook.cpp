#include "Gradebook.h"
#include <vector>
#include <algorithm>

GradeBook::GradeBook() {
    // Default constructor - grades vector is initialized empty
}

void GradeBook::addGrade(const std::string& assignment, double score) {
    grades.push_back(std::make_pair(assignment, score));
}

double GradeBook::getAverage() const {
    if (grades.empty()) {
        return 0.0;
    }
    
    double sum = 0.0;
    for (const auto& grade : grades) {
        sum += grade.second;
    }
    return sum / grades.size();
}

double GradeBook::getHighest() const {
    if (grades.empty()) {
        return 0.0;
    }
    
    double highest = grades[0].second;
    for (const auto& grade : grades) {
        if (grade.second > highest) {
            highest = grade.second;
        }
    }
    return highest;
}

int GradeBook::numGrades() const {
    return grades.size();
}