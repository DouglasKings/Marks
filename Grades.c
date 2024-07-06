#include <stdio.h>

char* getGrades(int Marks); //This indicates that the function returns a pointer to a character. A char* (character pointer) is essentially a memory address that points to a location where a character is stored.

int main() {
    int Marks; // Declare Marks as int
    char* GradeString; // Declare GradeString as char*

    printf("Enter the marks: ");
    scanf("%d", &Marks); // Pass the address of Marks

    // Call the grade function and store the returned grade
    GradeString = getGrades(Marks);

    // Display the grade
    printf("Your grade is %s \n", GradeString);

    return 0;
}

// Function implementation
char* getGrades(int Marks) { 
    if (Marks >= 91 && Marks <= 100) {
        return "AA"; // This is now a string literal
    } else if (Marks >= 81 && Marks <= 90) {
        return "AB";
    } else if (Marks >= 71 && Marks <= 80) {
        return "BB";
    } else if (Marks >= 61 && Marks <= 70) {
        return "BC";
    } else if (Marks >= 51 && Marks <= 60) {
        return "CD";
    } else if (Marks >= 41 && Marks <= 50) {
        return "DD";
    } else if (Marks <= 40) {
        return "Fail";
    } else {
        return "Please enter a valid number."; // This is also a string literal
    }
}
