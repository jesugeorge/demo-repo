#include <iostream>
#include <conio.h>

using namespace std;

class Employee{
//initialization of private members
private:
    string firstName;
    string lastName;
    int empID;
    int hoursWorked;
    float payRate;
    int overtime;
    float pay;
    float overtimepay=0;
//initialization of public member functions
public:
    void set_EmployeeDetails()
    {
        cout<<"Employee first name: "<<endl;
        cin>>firstName;
        cout<<"Employee last name: "<<endl;
        cin>>lastName;
        cout<<"Employee ID: "<<endl;
        cin>>empID;
        cout<<"Employee hours worked: "<<endl;
        cin>>hoursWorked;
        cout<<"Employee pay rate: "<<endl;
        cin>>payRate;
    }
    //compute employee pay
    float compute_pay()
    {
        pay = hoursWorked*payRate;
        return pay;
    }
    //compute employee overtime pay
    float overtimePay()
    {
        //hours worked above 40 are termed under overtime hours
        overtime = hoursWorked - 40;
        //if the difference between hoursworked and 40 is a positive number then calculate overtime pay
        if(overtime>0)
        {
            overtimepay = (40*payRate) + (overtime * payRate * 1.5);
            cout<<(40*payRate);
            cout<<(overtime * payRate * 1.5);
        }
        return overtimepay;
    }

};


int main()
{
    //instantiate employee object
    Employee employee_obj = Employee();
    //call set method
    employee_obj.set_EmployeeDetails();
    //call compute pay method
    cout<<"Employee Pay: "<<employee_obj.compute_pay()<<endl;
    //call overtimePay method
    cout<<"Employee overtime: "<<employee_obj.overtimePay()<<endl;
    return 0;
}
