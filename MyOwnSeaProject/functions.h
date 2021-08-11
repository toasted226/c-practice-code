#define NELEMS(x) (sizeof(x)) / (sizeof((x)[0]))

int numOfStudents;

struct Student
{
    char name[20];
    int age;
};
