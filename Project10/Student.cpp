#include"Student.h"

int main()
{
    Student s1("Anna", "JHH", "GHFT", 20);
    Student s2("Maria", "jdjgff", "KJHG", 21);
    s1.WriteFile("Students.txt");
    s2.WriteFile("Students.txt");
    Student::ReadFile("Students.txt");
}