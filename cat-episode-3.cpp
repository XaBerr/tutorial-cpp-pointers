#include <iostream>
#include <memory>
using namespace std;

struct Camera {
    int id;
    Camera(int _id) : id{_id} {}
    ~Camera() { cout << "Deleted camera " << id << endl; }
};

int main() {
    unique_ptr<Camera> cameraCesco(new Camera(1));
    cout << "End main" << endl;
}