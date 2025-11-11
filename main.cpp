#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "orderedLinkedList.h"
#include "person.h"
using namespace std;

int main() {
    cout << "Current working directory: " << filesystem::current_path() << endl;
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
        // Person newPerson(name, age);
        // list.insertNode(newPerson);

    }   
    inputFile.close();


    return 0;

}