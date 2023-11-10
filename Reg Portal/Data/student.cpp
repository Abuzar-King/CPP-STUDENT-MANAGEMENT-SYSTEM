#include"data_header.h"

// DEFINITIONS OF STUDENT CLASS FUNCTIONS
student::student(int r,string nam,int s_age,char sex,string spec)
{
    roll_no = r;
    name = nam;
    age = s_age;
    gender = sex;
    specialization = spec;
}

student::student()
{
    roll_no = 0;
    name = " ";
    age = 0;
    gender = ' ';
    specialization = " ";
}

student::student(student &s)
{
    roll_no = s.roll_no;
    name = s.name;
    age = s.age;
    gender = s.gender;
    specialization = s.specialization;
}

student::~student(){}


void student::set_roll_no(int r)
{
    roll_no = r;
}

int student::get_roll_no()
{
    return roll_no;
}

void student::set_age(int a)
{
    age = a;
}

int student::get_age()
{
    return age;
}

void student::set_gender(char g)
{
    gender = g;
}

char student::get_gender()
{
    return gender;
}

void student::set_name(string s_name)
{
    name = s_name;
}

string student::get_name()
{
    return name;
}
void student::set_specialization(string spec)
{
    specialization = spec;
}

string student::get_specialization()
{
    return specialization;
}
