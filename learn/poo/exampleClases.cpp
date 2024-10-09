#include <iostream>

using namespace std;

class Person {

    private: int age;
    protected: string name;
    public: string address;
    static int countPeople;

    public:
       void setAge( int age){
           age = age;
       }

       int getAge() const {
          return age;
       }
};

class Student: public Person {

    public:
       
};

class teacher: protected Person {

};

class Admin: private Person {

};

int main(int argc, char const *argv[])
{
    
    return 0;
}
