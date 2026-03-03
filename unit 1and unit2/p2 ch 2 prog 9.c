
#include <stdio.h>

struct Date {
    int day, month, year;
};

int main() {
    struct Date d1, d2;

    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    if(d1.day == d2.day &&
       d1.month == d2.month &&
       d1.year == d2.year)
        printf("equal");
    else
        printf("not equal");

    return 0;
}
