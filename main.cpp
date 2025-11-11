

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "orderedLinkedList.h"
#include "person.h"
using namespace std;

int main() {

    ifstream inputFile("input1.txt");
    system("cd");
    if (!inputFile.is_open()) {
        cerr << "Failed to open input1.txt\n";
        return 1;
    }
    orderedLinkedList<Person> list;
    string personInfo;
    string name;
    int age;
    int index;
    while (getline(inputFile, personInfo)) {
        index = personInfo.find(' ');
        name = personInfo.substr(0, index);
        age = stoi(personInfo.substr(index));
        list.insertNode(Person(name, age));

    }   
    inputFile.close();
    list.print(cout);

    return 0;

}