#include <iostream>
#include <string>

class Book {
    private:
        std::string title;
        std::string author;
        int yearPublished;
        double price;
    public:
        // Constructor
        Book(std::string t, std::string a, int y, double p) {
            title = t;
            author = a;
            yearPublished = y;
            price = p;
        }
        // Getters
        std::string getTitle() {
            return title;
        }
        std::string getAuthor() {
            return author;
        }
        int getYearPublished() {
            return yearPublished;
        }
        double getPrice() {
            return price;
        }
        // Setters
        void setTitle(std::string t) {
            title = t;
        }
        void setAuthor(std::string a) {
            author = a;
        }
        void setYearPublished(int y) {
            yearPublished = y;
        }
        void setPrice(double p) {
            price = p;
        }
};

int main() {
    // Create a new book object
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925, 12.99);

    // Print out the book's details
    std::cout << "Title: " << book1.getTitle() << std::endl;
    std::cout << "Author: " << book1.getAuthor() << std::endl;
    std::cout << "Year Published: " << book1.getYearPublished() << std::endl;
    std::cout << "Price: $" << book1.getPrice() << std::endl;

    // Update the book's price and print out the new price
    book1.setPrice(14.99);
    std::cout << "New Price: $" << book1.getPrice() << std::endl;

    return 0;
}
