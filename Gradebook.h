#pragma once
#include <string>
#include <vector>
#include <utility>
 
class GradeBook {
public:
    GradeBook();
    void addGrade(const std::string& assignment, double score);
    double getAverage() const;
    double getHighest() const;
    int numGrades() const;
private:
    std::vector<std::pair<std::string, double>> grades;
};
