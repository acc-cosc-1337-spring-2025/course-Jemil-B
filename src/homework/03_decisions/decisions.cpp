//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
// using ifelif
std::string convert_to_letter_grade_if(double grade) {
    if (grade >=90.0) {
        return "A";
    } else if (grade >= 80.0) {
        return "B";
    } else if (grade >= 70.0) {
        return "C";
    } else if (grade >= 60.0){
        return "D";
    } else {
        return "F";
    }
}

//using switch
std::string convert_to_letter_grade_switch(double grade) {
    int grade_range = static_cast<int>(grade / 10); // convert to range

    switch (grade_range) {
        case 10:
        case 9:
            return "A";
        case 8:
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
}