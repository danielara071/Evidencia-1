#include <iostream>
using namespace std;

class Registro{
    private:
        string data;
        int clave;
        
    public:
        void setClave(int key);
        int getClave();
        void dump();
        void setData(string line);

};

void Registro:: dump(){
    cout << data;
}

int Registro ::getClave(){
    return clave;
}

void Registro :: setClave(int key){
    clave = key;
}

void Registro :: setData(string line){
    data = line;
}
