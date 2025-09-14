#include "BaseEntity.cpp"

class teacher : public BaseEntity {
    private :
        double salary;

    public :
    
             //Setter
        void setSalary(double salary){
            this->salary=salary;
        }

             //Getter
        double getsalary(){
            return salary;
        }
};