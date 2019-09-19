//============================================================================
// Name        : Matrices.cpp
// Author      : Eric Delbende
// Version     :
// Copyright   : Your copyright notice
// Description : Calcul sur matrice d'ordre 3 World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Eigen/Dense>

int main() 
{
		Eigen::Matrix<double,3,3> A;
		A<<1,0,4,-1,3,0,1,0,-1;
		std::cout<< "La Matrice A est :" << std::endl; 
		std::cout<<A<<std::endl ;
		std::cout<< "Son déterminant vaut:" <<A.determinant() <<std::endl;
}
