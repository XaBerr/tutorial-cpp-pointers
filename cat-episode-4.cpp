#include <iostream>
#include <memory>
using namespace std;

class FPGA {
   public:
    int id;
    FPGA(int _id = 0) : id{_id} {}
};

int main() {
    shared_ptr<FPGA> stancoFpga = make_shared<FPGA>(1);
    shared_ptr<FPGA> matiasFpga = stancoFpga;
    shared_ptr<FPGA> danielFpga = stancoFpga;

    cout << "Matias FPGA id: " << matiasFpga->id
         << " Daniel FPGA id: " << danielFpga->id << endl;
}