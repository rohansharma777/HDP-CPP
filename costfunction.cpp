//#include "costfunction.h"
#include <iostream>
#include <Eigen/Dense>
#include <random>
#include <cstdlib>

using namespace Eigen;
using namespace std;

//double costfunction(MatrixXd X, VectorXd y){
int main(){


    int i,j;
    long double rnd, f;

    MatrixXd theta1(10,11);
    MatrixXd theta2(1, 11);
     
    srand(time(0));

    for(i=0; i<10; i++){
        for(j=0; j<11; j++){
            rnd = rand();

            if(rnd>=1){
                rnd = rnd*pow(10, -9);
            }
            f = 2*0.12*rnd;
            if(f>0.1)
            theta1(i, j) = f - 0.1;
            else
            theta1(i, j) = -(f - 0.1);
        }
    }

    cout<<theta1<<endl;

    for(i=0; i<11; i++){
         rnd = rand();
         f = 2*0.12*rnd;
         if(f>0.1)
            theta2(1, i) = f - 0.1;
            else
            theta2(1, i) = -(f - 0.1);
    }

    cout<<endl;
    cout<<theta2<<endl;
}