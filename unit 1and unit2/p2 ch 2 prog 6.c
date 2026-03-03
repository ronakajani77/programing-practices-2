
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    int year;
};

void joined2019(struct Student s[], int n) {
    int i;
    printf("\nStudents Joined in 2019:\n");
    for(i = 0; i < n; i++) {
        if(s[i].year == 2019)
            printf("%d %s\n", s[i].rollno, s[i].name);
    }
}

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d %s %d",
              &s[i].rollno,
              s[i].name,
              &s[i].year);
    }

    joined2019(s, 5);

    return 0;
}
