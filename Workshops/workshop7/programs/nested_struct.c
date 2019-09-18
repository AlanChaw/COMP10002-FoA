#include <stdio.h>
#include <string.h>

#define LENGTH 20
#define MAX_NUM 100

typedef struct {
    char name[LENGTH];
    int age;
    int math_grade;
    int english_grade;
} student_t;

typedef struct {
    int class_num;
    student_t all_students[MAX_NUM];
} class_t;

typedef struct {
    char school_name[LENGTH];
    class_t all_classes[MAX_NUM];
} school_t;

int main(){
    
    return 0;
}
