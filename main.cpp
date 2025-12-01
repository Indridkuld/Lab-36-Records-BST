#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"


using namespace std;

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

    cout << "In-order traversal of the binary tree:" << endl;
    tree.displayInOrder();

    return 0;
}
