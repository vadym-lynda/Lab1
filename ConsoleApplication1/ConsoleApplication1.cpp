#include <iostream>
using namespace std;
class Kasa {
private:
    int cars = 0;
    double money = 0;
    const double pay = 0.5;
public:
    void payingCar() {
        cars += 1;
        money += pay;
    }
    void nорау—аг() {
        cars += 1;}
    void display() {
        cout << "cars - " << this->cars << endl;
        cout << "money - " << this->money << "$" << endl;
    }
};
int main(){
    srand(time(NULL));
    Kasa kasa;
    int argument;
        for (int i = 0; i < rand()+1; i++) {
        argument = rand()%2+1;
               if (argument == 1 || argument == 2) {
        if (argument == 1) {
        kasa.payingCar();
        }
        else if (argument == 2) {
        kasa.nорау—аг();
        }
            }
                }
    kasa.display();
    }

