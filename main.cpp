#include <iostream>
#include <Eigen/Dense>
#include <fstream>
#include <string>
#include "costfunction.h"


using namespace Eigen;
using namespace std;

int main(){
    ifstream in;
    string line;

    in.open("Dataset.csv");

    MatrixXd X(5000,400);
    VectorXd y(5000);

    int i=0, j=0;

    while (getline(in, line)){
    stringstream lineStream(line);
    string cell;

    while (std::getline(lineStream, cell, ','))
    {
        X(i,j) = stod(cell);
        j++;
    }
    j = 0;
    i++;
}


   i = 0;

   in.close();

   in.open("y.csv");

    while (getline(in, line)){
    stringstream lineStream(line);
    y(i) = stod(line);
    i++;
}

    cout<<y<<endl;
    in.close();

    double jot;
    jot = costfunction(X, y);
}