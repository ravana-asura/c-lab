#include<iostream>

using namespace std;

class Date{
    int year, month, day;

    public:
        void getDate(){
            cin >> year >> month >> day;
        }

        void showDate(){
            cout << year << month << day;
        }

        bool operator==(Date &other){
            if(year == other.year && month == other.month && day == other.day)
            return true;

        }
};

class Person{
    char name[30];
    Date dateOfBirth;

    public:
        void getData(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter date of birth year month day";
            dateOfBirth.getDate();
        }

        void showData(){
            cout << "Name: " << name << endl;
            cout << "Date of Birth: ";
            dateOfBirth.showDate();
            cout << endl;
        }

        friend void compare(Date, Person);
};

void compare(Date d, Person p){
    if(d == p.dateOfBirth){
        p.showData();
    }
}

int main(){
    int n;
    cout << "Enter the number of people: ";
    cin >> n;
    Person *p = new Person[n];

    cout << "Enter the data of " << n << " persons" << endl;
    for(int i=0; i<n; i++){
        p[i].getData();
    }

    Date dob;
    cout << "Enter a date of birth: ";
    dob.getDate();

    cout << "Comparing dates:" << endl;
    for(int i=0; i<n; i++){
        compare(dob, p[i]);
    }

    delete [] p;

}