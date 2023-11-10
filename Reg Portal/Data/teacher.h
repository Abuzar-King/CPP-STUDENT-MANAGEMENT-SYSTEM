#include<string>
#include<cstring>

using namespace std;

class teacher
{
    private:   // PRIVATE MEMBERS
    string name;
    string specialization;
    int age;
    string qualification;

    public:      // CONSTRUCTORS AND DESTRUCTOR
    teacher(string,string,int,string);
    teacher();
    teacher(teacher &t);
    ~teacher();

    // GETTERS AND SETTERS
    void set_age(int);
    int get_age();
    void set_qualification(string);
    string get_qualification();
    void set_name(string);
    string get_name();
    void set_spec(string);
    string get_spec();
};