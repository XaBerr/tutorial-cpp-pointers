#include <iostream>
using namespace std;

struct Camera {
    int id;
    Camera(int _id) : id{_id} {}
    ~Camera() { cout << "Deleted camera " << id << endl; }
};

int main() {
    Camera* cescoCamera = new Camera(1);
    delete cescoCamera;
    cout << "End main" << endl;
}