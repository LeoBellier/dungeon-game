#include <iostream>

using namespace std;

const float PI = 3.1416;


float calculateDiameterCircle(float radius){
    return (radius*radius)*PI*2;
}

float calculateDiameterSphere(float radius){
    return (radius*radius)*PI*4;
}

int main() {
    float radius;

    cin >> radius;

    cout << calculateDiameterCircle(radius) << endl;

    cout << calculateDiameterSphere(radius) << endl;

    return 0;    
}
