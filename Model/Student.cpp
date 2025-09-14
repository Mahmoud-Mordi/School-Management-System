#include <iostream>
using namespace std;
class student {
    private :
        int id;
        string name;
        int age;
        string phonenumber;
        double gpa;

    public :

            //Setter
        void setId(int id){
            this->id=id;
        }
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setPhonenumber(string Phonenumber){
            this->phonenumber=phonenumber;
        }
        void setGpa(double gpa){
            this->gpa=gpa;
        }

            //Getter
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getPhonenumber(){
            return phonenumber;
        }
        double getGpa(){
            return gpa;
        }
};