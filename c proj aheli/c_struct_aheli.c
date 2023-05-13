#include <stdio.h>

struct student {
    char name[50];
    char phone[20];
    int marks;
};

int main() {
    int num_students, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    struct student students[num_students];
    
    for (i = 0; i < num_students; i++) {
        printf("Enter the details for student %d:\n", i+1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Phone number: ");
        scanf("%s", students[i].phone);
        
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    printf("Details of all students:\n");
    
    for (i = 0; i < num_students; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\nPhone number: %s\nMarks: %d\n", students[i].name, students[i].phone, students[i].marks);
    }
    
    return 0;
}