
#include <stdio.h>

struct TestStruct {
    int a;
    float b;
};

union TestUnion {
    int a;
    float b;
};

int main() {
    struct TestStruct s;
    union TestUnion u;

    printf("Size of Structure: %lu\n", sizeof(s));
    printf("Size of Union: %lu\n", sizeof(u));

    return 0;
}
