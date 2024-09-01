#include<iostream>
#include<iomanip>

using namespace std;

class Library{
    char bookTitle[100];
    char author[30];
    int numberOfCopies=0;

    public:
        void getData(){
            cout << "Enter book title: ";
            cin.getline(bookTitle, 100);
            cout << "Enter author name: ";
            cin.getline(author, 30);
            cout << "Enter number of copies: ";
            cin >> numberOfCopies;
        }

        void showData(){
            cout << "Title: " << bookTitle << endl << "Author: " << author << endl << "Number of copies: " << numberOfCopies << endl;
        }

        void addBooks(int n){
            numberOfCopies+=n;
            cout << "Added " << n << " books succesfully\n";
        }

        void issueBook(){
            if(numberOfCopies == 0){
                cout << "Sorry the book is currently unavailable. Please add or return book." << endl;
            } else {
                numberOfCopies--;
                cout << "Book issued successfully\n";
            }
        }
        void returnBook(){
            numberOfCopies++;
            cout << "Book returned succesfully\n";
        }
};

int main(){
    Library lib;
    lib.getData();

    int choice, n;

    while(true){

        cout << "Welcome to the library\n1.View Book Information\n2.Add Books\n3.Issue Book\n4.Return Book\n5.Exit\n\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << endl << endl;
                lib.showData();
                break;
            case 2:
                cout << "Enter the number of books: ";
                cin >> n;
                lib.addBooks(n);
                break;
            case 3:
                lib.issueBook();
                break;
            case 4:
                lib.returnBook();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid Choice...";
        }
    }

    return 0;
}