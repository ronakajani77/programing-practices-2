#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    char department[40];
    int year;
    float score;
};

int main() {
    struct Student s[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        scanf("%d %s %s %d %f",
              &s[i].rollno,
              s[i].name,
              s[i].department,
              &s[i].year,
              &s[i].score);
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted by Score (Descending):\n");
    for(i = 0; i < 5; i++) {
        printf("%s %.2f\n", s[i].name, s[i].score);
    }

    return 0;
}
