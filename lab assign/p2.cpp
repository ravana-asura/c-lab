#include<iostream>
#include<iomanip>

using namespace std;

class Employee{
    int id;
    char name[50];
    float salary;

    public:
        void getData(){
            cout << "Enter id, name and salary: ";
            cin >> id >> name >> salary;
        }

        void showData(){
            cout << "Id:" << id << " Name: " << name << " Salary: " << salary << endl;
        }

        float getSal(){
            return salary;
        }
};

int main(){
    int n;
    cout << "Enter the no. of employees: ";
    cin >> n;
    Employee *e = new Employee[n];

    cout << "Enter the employee details of " << n << " employees:" << endl;
    for(int i=0; i<n; i++){
        e[i].getData();
    }

    float salary;

    cout << "Enter a specific salary: ";
    cin >> salary;

    for(int i=0; i<n; i++){
        if(e[i].getSal() > salary)
            e[i].showData();
    }

    delete [] e;
}