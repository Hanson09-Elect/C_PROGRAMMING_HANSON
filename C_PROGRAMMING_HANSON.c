/*
NAME: ODU HANSON
DEPARTMENT: ELECTRICAL ENGINEERING
COURSE: EMBEDDED SYSTEMS 
COURSE CODE EEE423
MAT NO : DE:2020/0914
LECTURER : ENGR. F.S MBAH

ASSIGNMENT
A PROGRAM THAT COMPUTES THE SCORES OF THREE STUDENTS FOR FOUR COURSES AND OUTPUTS THEIR CURRENT CGPA
*/

#include <stdio.h>

// Function to calculate grade point for a given score
char calculateLetterGrade(int score) {
    if (score >= 70) {
        return 'A';
    } else if (score >= 60) {
        return 'B';
    } else if (score >= 50) {
        return 'C';
    } else if (score >= 45) {
        return 'D';
    } else if (score >= 40) {
        return 'E';
    } else {
        return 'F';
    }
}

// Function to calculate CGPA
float CGPAanalysis(int score1, int score2, int score3, int score4) {
    // Calculate grade points for each course
    int grade_point1 = calculateLetterGrade(score1) - 'A';
    int grade_point2 = calculateLetterGrade(score2) - 'A';
    int grade_point3 = calculateLetterGrade(score3) - 'A';
    int grade_point4 = calculateLetterGrade(score4) - 'A';

    // Calculate cumulative grade points and course units
    int cumulative_grade_point = (grade_point1 + grade_point2 + grade_point3 + grade_point4) * 12;
    printf("cummulative garde point for the four courses %d\n", cumulative_grade_point);
    int gpa = cumulative_grade_point /12;
    printf("Current gpa is %d\n", gpa);
    int cumulative_course_units = 120 + 12;

    // Calculate CGPA
   printf ("previous cummulative grade point is taken as 500");
    float cgpa = (float)(cumulative_grade_point + 500) / cumulative_course_units;
  //returns the calculated
    return cgpa;
}
//Main program execution

int main() {
    char name[100];
    char matriculation_number[20];
    int score_eee401, score_eee402, score_eee403, score_eee404;
    int i;

    for (i = 0; i < 3; i++) {
        // Input student information
        printf("\nStudent %d\n", i + 1);
        printf("Enter your name: ");
        scanf("%s", name);

        printf("pls Enter your matriculation number: ");
        scanf("%s", matriculation_number);

        // Input scores for each course
        printf("pls Enter your score for EEE 401: ");
        scanf("%d", &score_eee401);
        printf("Grade: %c\n", calculateLetterGrade(score_eee401));

        printf("pls Enter your score for EEE 402: ");
        scanf("%d", &score_eee402);
        printf("Grade: %c\n", calculateLetterGrade(score_eee402));

        printf("pls Enter your score for EEE 403: ");
        scanf("%d", &score_eee403);
        printf("Grade: %c\n", calculateLetterGrade(score_eee403));

        printf("pls Enter your score for EEE 404: ");
        scanf("%d", &score_eee404);
        printf("Grade: %c\n", calculateLetterGrade(score_eee404));

        // Calculate and display CGPA
        float cgpa = CGPAanalysis(score_eee401, score_eee402, score_eee403, score_eee404);
        printf("\nCGPA for %s (Matriculation Number: %s): %.2f\n", name, matriculation_number, cgpa);
    }
    printf("thank you for using this c program ");

    return 0;
}

