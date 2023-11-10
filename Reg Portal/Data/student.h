#include<string>
#include<cstring>

using namespace std;

class student{
    private:    // PRIVATE MEMBERS
    int roll_no;
    string name;
    int age;
    char gender;
    string specialization;

    public:     // CONSTRUCTORS AND DESTRUCTOR
    student(int,string,int,char,string);
    student();
    student(student &s);
    ~student();

    // GETTERS AND SETTERS
    void set_roll_no(int);
    int get_roll_no();
    void set_age(int);
    int get_age();
    void set_gender(char);
    char get_gender();
    void set_name(string);
    string get_name();
    void set_specialization(string);
    string get_specialization();
};