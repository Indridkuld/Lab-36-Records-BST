#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"


using namespace std;

void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Display Records In-Order\n";
    cout << "2. Add a Record\n";
    cout << "3. Delete a Record\n";
    cout << "4. Search for a Record\n";
    cout << "5. Modify a Record\n";
    cout << "6 Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    IntBinaryTree tree;

    ifstream infile("codes.txt");
    if (!infile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    string code;
    
    while(infile >> code) {
        tree.insertNode(code);
    }
    infile.close();

    int choice = 0;

    do{
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "In-order traversal of the binary tree:" << endl;
                tree.displayInOrder();
                break;
            case 2: {
                string newCode;
                cout << "Enter the code to add: ";
                cin >> newCode;
                tree.insertNode(newCode);
                cout << "Code added." << endl;
                break;
            }
            case 3: {
                string delCode;
                cout << "Enter the code to delete: ";
                cin >> delCode;
                tree.remove(delCode);
                cout << "Code deleted if it existed." << endl;
                break;
            }
            case 4: {
                string searchCode;
                cout << "Enter the code to search for: ";
                cin >> searchCode;
                if(tree.searchNode(searchCode)) {
                    cout << "Code found." << endl;
                } else {
                    cout << "Code not found." << endl;
                }
                break;
            }
            case 5:
                cout << "Modify functionality not implemented yet." << endl;
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 6); 

    return 0;
}
