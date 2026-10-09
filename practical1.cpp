/*A bookstore is introducing a digital inventory system to organize its
collection of books. Design a Book class that stores essential book details and
allows the staff to record and display the information whenever required.*/

#include <iostream>
#include <string>
using namespace std;
class Book {
private:
  string title;
  string author;
  string ISBN;
  double price;

public:
  // Function to record book information
  void recordBook() {
    cout << "Enter Book Title: ";
    getline(cin, title);
    cout << "Enter Author Name: ";
    getline(cin, author);
    cout << "Enter ISBN: ";
    getline(cin, ISBN);
    cout << "Enter Price: ";
    cin >> price;
    cin.ignore();
  }
  // Function to display book information
  void displayBook() {
    cout << "\n----- Book Information -----" << endl;
    cout << "Title : " << title << endl;
    cout << "Author : " << author << endl;
    cout << "ISBN : " << ISBN << endl;
    cout << "Price : " << price << endl;
  }
};
int main() {
  Book book;
  cout << "===== Digital Book Inventory System =====" << endl;
  book.recordBook();
  book.displayBook();
  return 0;
}