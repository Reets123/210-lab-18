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
            count+;
        }
    }
