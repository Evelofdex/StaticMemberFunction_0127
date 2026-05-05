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


void  Mahasiswa::setID(){
    id = ++nim;
}

void Mahasiswa::printAll(){
    cout << "ID =   " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){

}







