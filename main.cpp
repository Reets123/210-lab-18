// Lab 18: Movie Reviews
// COMSC-210 - Ibrahim Alatig 

#include <iostream>
#include <string>

using namespace std;

struct ReviewNode {
    double rating;
    string comment;
    reviewNode* next;
};

public:
    ReviewList() : head(nullptr), tail(nullptr), count(0) []

    void addAtHead(double rating, const string& comment) {
        ReviewNode* newNode = new ReviewNode{rating, comment, head};
        head = newNode;
        if (tail == nullptr) {
            tail == newNode
        }
        count++;
    }

    void addAtTail(double rating, const string& comment){
        ReviewNode* newNode = new ReviewNode{rating, comment, nullptr};
        if (tail == nullptr) {
            head = tail = newNode;
            else{
                tail->next = newNode;
                tail = newNode;
            }
            count++;
        }
    }

    void outputReviews() {
        ReviewNode* current = head;
        double totalRating = 0;

        cout <<  "Outputting all reviews:" << endl;
        for (int i = 1; current != nullptr; i++) {
            cout << "    > Review #" << i << ": " << current->rating << ": " << current->comment << endl;
            totalRating += current->rating;
            current = current->next;
        }

        double average = (count > 0) ? (totalRating / count) : 0;
        cout << "    > Average: " << average << endl;
    }
     ReviewList() {
        ReviewNode* current = head;
        while (current != nullptr) {
            ReviewNode* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    ReviewList reviews;
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "    [1] New nodes are added at the head of the linked list" << endl;
    cout << "    [2] New nodes are added at the tail of the linked list" << endl;
    cout << "    Choice: ";
    cin >> choice;

    char moreReviews;
    do {
        double rating;
        string comment;

        cout << "Enter review rating 0


    
