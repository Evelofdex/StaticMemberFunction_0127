#include <iostream>
using namespace std;

class Mahasiswa{
    private:
    static int nim;
    public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pnim){
        nim = pnim;
    };
};

int main(){

}







