#include<stdio.h>
#include<string.h>

  //define a structure for student
  struct student {
        int rollno;
        char name[50];
        float marks;
        };
        int main() {
        struct student students[5];
        struct student temp;//for swapping
        int i,j;

        // input student details
        for (i=0;i<5;i++){
            printf("enter details for student %d:\n",i+1);
            printf("roll number:");
            scanf("%d",&students[i].rollno);
            printf("name: ");
            scanf("%[\n]",student[i].name);
            printf("marks:");
            scanf("%f",&student[i].marks);
            printf("\n");
            }
            for (i=0;i<4;i++) {
                for (j=i+1; j <5; j++) {
                    if (strcmp(student[i].name,student[j].name)>0) {
                        temp=student[i];
                        students[i]=student[j];
                        students[j]=temp;

                    }
                }
            }

            print("\nStudent records sorted by name:\n");
            printf("roll no\tName\t\tMarks\n");
            printf("-----------------------------\n");
            for (i=0;i<5;i++) {
                printf("%d\t%s\t\t%.2f\n",student[i].rollNo,student[i].name,students[i].marks);

            }
                  return 0;
        }














