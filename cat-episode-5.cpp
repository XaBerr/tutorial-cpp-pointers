#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct Person {
    weak_ptr<Person> weakMeasureFriend;
    string name;
    Person(string _name) : name{_name} {};
    ~Person() { cout << "Killing weak " << name << endl; };
};

int main() {
    shared_ptr<Person> giulio = make_shared<Person>("giulio");
    shared_ptr<Person> matteo = make_shared<Person>("matteo");
    giulio->weakMeasureFriend = matteo;
    matteo->weakMeasureFriend = giulio;
}