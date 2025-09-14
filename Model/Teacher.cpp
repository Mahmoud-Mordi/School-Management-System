#include <iostream>
using namespace std;
class teacher {
    private :
        int id;
        string name;
        int age;
        string phonenumber;
        double salary;

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
        void setSalary(double salary){
            this->salary=salary;
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
        double getsalary(){
            return salary;
        }
};