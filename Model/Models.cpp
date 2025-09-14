#include <iostream>
using namespace std;

// Create Model ShareData

class ShareData {
	private:
		int id;
		string name;
	public:
		//  Setter
		void setId(int id){
			this->id = id;
		}
		void setName(string name){
			this->name = name;
		}
		// Getter
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
	
};

//create Model BaseEntity

class BaseEntity : public ShareData {
    private :
        int age;
        string phonenumber;

    public :
           //Setter
        void setAge(int age){
            this->age=age;
        }
        void setPhonenumber(string Phonenumber){
            this->phonenumber=phonenumber;
        }
            //Getter
        int getAge(){
            return age;
        }
        string getPhonenumber(){
            return phonenumber;
        }
};

//create Model Teacher

class Teacher : public BaseEntity {
    private :
        double salary;
        int studentIds[5];
    public :
    
             //Setter
        void setSalary(double salary){
            this->salary=salary;
        }
        void setStudentIds(int studentIds[5]){
            for (int i = 0 ; i < 5 ; i++)
            this->studentIds[i]=studentIds[i];
        }

             //Getter
        double getsalary(){
            return salary;
        }
        int * getStudentIds(){
            return studentIds;
        }
};

// Create Model Course
class Course : public ShareData{
	private:
		double hour;
		int studentIds[5];
	public:
		//  Setter
		void setHour(double hour){
			this->hour = hour;
		}
		void setStudentIds(int studentIds[5]){
			for(int i=0;i<5;i++){
				this->studentIds[i] == studentIds[i];
			}
		}
		
		// Getter
		double getHour(){
			return hour;
		}
		int * getStudentIds(){
			return studentIds;	
		}
};

//create Model Student

class student : public BaseEntity {
    private :
        double gpa;
        Course courses[5];
        Teacher teachers[5];

    public :

            //Setter
        void setGpa(double gpa){
            this->gpa=gpa;
        }
        void setTeachers(Teacher teachers[5]){
            for (int i = 0 ; i < 5 ; i++){
                this->teachers[i]= teachers[i];  
            }
        }
        void setCourses(Course courses[5]){
			for(int i=0;i<5;i++){
				this->courses[i] = courses[i];
			}
        }
            //Getter
        double getGpa(){
            return gpa;
        }
        Teacher * getTeachers(){
            return teachers;
        }
        Course * getCourses(){
			return courses;
		}

};

