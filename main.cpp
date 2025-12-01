#include <iostream>
#include <string>
#include "IntBinaryTree.h"


using namespace std;

int main() {
    IntBinaryTree tree;

    tree.insertNode("ABC123");
    tree.insertNode("XYZ999");
    tree.insertNode("HELLO1");

    cout << "In-order traversal:\n";
    tree.displayInOrder();

    cout << "Searching for ABC123: "
         << (tree.searchNode("ABC123") ? "found\n" : "not found\n");

    return 0;
}
