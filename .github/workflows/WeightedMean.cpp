/*#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>*/

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

double WeightedMean(int, int, int);

int main() {
    int asize, i;
    
    cout << "How many elements the arrays have?" << endl;
    cin >> asize;
    vector<int> X(asize), W(asize);
    
    for (i = 0 ; i <= asize - 1 ; i += 1) {
        cout << "Enter element n" << i + 1 << " of X aray:" << endl;
        cin >> X[i];
        cout << "Enter element n" << i + 1 << " of W aray:" << endl;
        cin >> W[i];
    }
    cout << "The Wighted Mean (X,Y) is :" << endl;
    cout << WeightedMean(X, W, asize) << endl;
}

double WeightedMean(vector<int> & X, vector<int> & W, int asize) {
    double result;
    int sum, i, numWeight;
    
    sum = 0;
    numWeight = 0;
    for (i = 0 ; i <= asize - 1 ; i += 1) {
        sum = sum + X[i] * W[i];
        numWeight = numWeight + W[i];
    }
    result = (double) sum / numWeight;
    
    return result;
}

// The following implements type conversion functions.

string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
