#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Student
{
    string name;
    string surname;
    string university;
    int age;
public:
    Student() {};
    Student(string n, string sur, string un, int a);
    void Init();
    void Print();
    void WriteFile(string filename);
    static void ReadFile(string filename);
};

Student::Student(string n, string sur, string un, int a)
{
    name = n;
    surname = sur;
    university = un;
    age = a;
}

void Student::Init()
{
    cin >> name >> surname >> university >> age;
}

void Student::Print()
{
    cout << "Name: " << name << "\tSurname: " << surname << "\tUniversity: " << university << "\tAge: " << age << endl;
}

void Student::WriteFile(string filename)
{
    ofstream write(filename, ios::app | ios::out);
    write << "Name: " << name << " Surname: " << surname << " University: " << university << " Age: " << age << endl;
    write.close();
}

void Student::ReadFile(string filename)
{
    ifstream read(filename, ios::in);
    char buffer[50];
    do
    {
        read.getline(buffer, 50);
        cout << buffer << endl;
    } while (read);
    read.close();
}