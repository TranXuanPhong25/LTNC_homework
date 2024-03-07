#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int age, standard;
    string first_name, last_name;
    
    
    public:
    
    int get_age()
    {
        return age;
    };
    void set_age(int student_age)
    {
        age = student_age;
    };

    string get_first_name()
    {
        return first_name;
    };
    void set_first_name(string student_first_name)
    {
        first_name = student_first_name;
    };

    string get_last_name()
    {
        return last_name;
    };
    void set_last_name(string student_last_name)
    {
        last_name = student_last_name;
    };

    int get_standard()
    {
        return standard;
    };
    void set_standard(int student_standard)
    {
        standard = student_standard;
    };
    
    string to_string()
    {
        stringstream var;
        var<<age<<","<<first_name<<","<<last_name<<","<<standard;
        
        return var.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
