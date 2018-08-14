#include <iostream>
#include <Eigen/Dense>
#include <fstream>
#include <string>


using namespace Eigen;
using namespace std;

int main(){
    ifstream in;
    string line;

    in.open("Dataset.csv");

    MatrixXd X(5000,400);

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
    
}