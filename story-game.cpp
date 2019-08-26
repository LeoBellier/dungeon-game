#include <iostream>

using namespace std;

class Cat 
{
    public:
    string Name;

    Cat (string iName){
        Name = iName;
    }

    
};

int main () {

    Cat MyFirstKitty("Mike");

    cout << MyFirstKitty.Name << endl;

    return 0;
}