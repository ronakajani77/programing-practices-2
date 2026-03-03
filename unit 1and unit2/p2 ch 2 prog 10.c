
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    int rollno;
    char name[20];
    char department[40];
    struct Date doj;
    float score;
};

int main() {
    struct Student s;

    scanf("%d %s %s %d %d %d %f",
          &s.rollno,
          s.name,
          s.department,
          &s.doj.day,
          &s.doj.month,
          &s.doj.year,
          &s.score);

    printf("\nRoll: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Department: %s\n", s.department);
    printf("Date of Joining: %d/%d/%d\n",
           s.doj.day, s.doj.month, s.doj.year);
    printf("Score: %.2f\n", s.score);

    return 0;
}
