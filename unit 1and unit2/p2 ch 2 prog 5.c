
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float score;
};

void printAboveFive(struct Student s[], int n) {
    int i;
    printf("\nStudents with Score > 5.0:\n");
    for(i = 0; i < n; i++) {
        if(s[i].score > 5.0)
            printf("%s\n", s[i].name);
    }
}

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d %s %f",
              &s[i].rollno,
              s[i].name,
              &s[i].score);
    }

    printAboveFive(s, 5);

    return 0;
}
