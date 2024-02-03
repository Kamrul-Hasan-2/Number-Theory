#include <bits/stdc++.h>
using namespace std;

int main(){
    int pizzaSize[] = {8, 10 , 12};
    int pizzaPrice[] = {10, 13, 16};

    int sum = 0;
    for (int i = 0; i < sizeof(pizzaSize) / sizeof(pizzaSize[0]); i++) {
        sum += pizzaSize[i];
    }
    int meanX = sum/3;

    int sum1 = 0;
    for (int i = 0; i < sizeof(pizzaPrice) / sizeof(pizzaPrice[0]); i++) {
        sum1 += pizzaPrice[i];
    }
    int meanY = sum1/3;

    int deviatonX = pizzaSize[0] - meanX;
    int deviatonX1 = pizzaSize[1] - meanX;
    int deviatonX2 = pizzaSize[2] - meanX;

    int deviatonY = pizzaPrice[0] - meanY;
    int deviatonY1 = pizzaPrice[1] - meanY;
    int deviatonY2 = pizzaPrice[2] - meanY;

    int productOfDeviations = deviatonX * deviatonY;
    int productOfDeviations1 = deviatonX1 * deviatonY1;
    int productOfDeviations2 = deviatonX2 * deviatonY2;

    double sumOfProductOfDeviations = productOfDeviations + productOfDeviations1 + productOfDeviations2;

    double squareOfDeviations = deviatonX * deviatonX;
    double squareOfDeviations1 = deviatonX1 * deviatonX1;
    double squareOfDeviations2 = deviatonX2 * deviatonX2;

    double squareOfDeviationsforX = squareOfDeviations + squareOfDeviations1 + squareOfDeviations2;
    
    double m = sumOfProductOfDeviations / squareOfDeviationsforX;

    double b = meanY - (m * meanX);

    double X;
    cout << "pizza size: " ;
    cin >> X; 
    
    double y = m * X + b;

    cout << "predicted price: " ;
    cout << y << endl;
}