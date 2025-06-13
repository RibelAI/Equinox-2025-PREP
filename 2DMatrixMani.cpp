#include <iostream>
#include <cstdlib>
#include<ctime>
int main(){
	int Rows;
	int Columns;
	int TotalRows;
	int TotalColumns;
	float** Matrix;
	std::cout<<"Please Enter The Numbe of the rows of The Matrix"<<std::endl;
	std::cin>>Rows;
	std::cout<<"Please Enter The Numbe of the columns of The Matrix"<<std::endl;
	std::cin>>Columns;
	Matrix = new float*[Rows];
	for (int i=0; i < Rows ; i++){
		Matrix[i] = new float[Columns];
	}
	srand(time(NULL));
	for (int i=0; i < Rows ; i++){
		for (int j = 0 ; j < Columns ; j++){
			Matrix[i][j]=static_cast<float>(rand()%10)/2;
		}
	}
	for (int i=0; i < Rows ; i++){
		for (int j = 0 ; j < Columns ; j++){
			std::cout<<Matrix[i][j]<<std::endl;
		}
	}
	for(int j = 0 ; j<Columns ; j++){
	for (int i=0; i < Rows ; i++){
		TotalRows = TotalRows+Matrix[i][j];
	}
	std::cout<<"The Total of the "<<j<<" Row is : "<<TotalRows<<std::endl;
	}
	
	for(int i=0; i < Rows ; i++){
	for (int j = 0 ; j<Columns ; j++){
		TotalColumns = TotalColumns+Matrix[i][j];
	}
	std::cout<<"The Total of the "<<i<<" Column is : "<<TotalColumns<<std::endl;
	}
	for (int i = 0 ; i < Rows ; i++){
 		delete Matrix[i];	
	}
	delete Matrix;
	return 0;
	
}
