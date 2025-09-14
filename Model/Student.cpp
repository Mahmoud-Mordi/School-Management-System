#include "BaseEntity.cpp"

class student : public BaseEntity {
    private :
        double gpa;

    public :

            //Setter
        void setGpa(double gpa){
            this->gpa=gpa;
        }

            //Getter
        double getGpa(){
            return gpa;
        }
};