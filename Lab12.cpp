#include <iostream>
#include <string>
using namespace std;

class Musician {
protected:
    string instrument;

public:
    explicit Musician(string instrument): instrument(move(instrument)) {}

    void perform() const {
        cout<<"Performing on the "<<instrument<<endl;
    }
};

class Guitarist : public Musician {
private:
    int numberOfStrings;

public:
    explicit Guitarist(int strings): Musician("guitar"), numberOfStrings(strings) {}

    void tuneGuitar() const {
        cout<<"Tuning the guitar with "<<numberOfStrings<<" strings"<<endl;
    }
};

int main() {
    Musician musician("guitar");
    Guitarist guitarist(6);
    guitarist.tuneGuitar();
    musician.perform();
}
