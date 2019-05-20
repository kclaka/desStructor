#include <iostream>
#include <string>

using namespace std;


class Student{
public:
    string* name;
    int age;
    string sex;

    Student(string name, int age, string sex){
        cout<<"Deault Constuctor Called"<<endl;
        this->name = new string(name);
        this->age = age;
        this->sex = sex;
    }

    Student(const Student &s){
        cout<<"Copy Constructor Called"<<endl;
        name = new string(*s.name);
        age = s.age;
    }

    ~Student(){
        cout<<"Destructor  Constructor Called"<<endl;
        delete name;
    }

    void changeNameandAge(string name, int age){
        *(this->name) = name;
        this->age = age;
    }

    void introduce(){
        cout<<"Hi I am "<<*name<<", I am "<<age<<" years old"<<endl;
    }



};

int main() {
    Student kenny("Kenny", 24, "Male");
    kenny.introduce();
    Student chris = kenny;
    chris.introduce();

    kenny.changeNameandAge("kenny i", 35);
    kenny.introduce();
    chris.introduce();

    return 0;
}