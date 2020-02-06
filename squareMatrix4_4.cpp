//============================================================================
// Name        : Matrices.cpp
// Author      : Eric Delbende
// Version     :
// Copyright   : Your copyright notice
// Description : Calculs de determinant et inverse de la matrice 4 4 in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Eigen/Dense>

int main() {
	Eigen::Matrix<double,4,4> A;
	A<<1,2,3,4,1,-1,1,-1,4,3,2,1,1,-1,0,0;
	std::cout<< "La Matrice A est :" << std::endl;
	std::cout<<A<<std::endl ;
	std::cout<< "Son determinant vaut :" <<A.determinant() <<std::endl;
	std::cout<< "Son inverse vaut :" <<A.inverse() <<std::endl;
	
}
