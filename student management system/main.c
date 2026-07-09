#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int choice;

    while(1) {
        printf("\n1.Add Student");
        printf("\n2.Display");
        printf("\n3.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                fp = fopen("student.txt","a");

                printf("Enter Roll: ");
                scanf("%d",&s.roll);

                printf("Enter Name: ");
                scanf("%s",s.name);

                printf("Enter Marks: ");
                scanf("%f",&s.marks);

                fwrite(&s,sizeof(s),1,fp);
                fclose(fp);
                break;

            case 2:
                fp = fopen("student.txt","r");

                while(fread(&s,sizeof(s),1,fp)) {
                    printf("\nRoll: %d",s.roll);
                    printf("\nName: %s",s.name);
                    printf("\nMarks: %.2f\n",s.marks);
                }

                fclose(fp);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice.");
        }
    }
}
