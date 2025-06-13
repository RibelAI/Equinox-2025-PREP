#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int main(){
	int Rows;
	int Columns;
	int index;
	int Choice;
	std::string answer = "YES";
	do{
	std::cout<<"Please Enter the number of rows"<<std::endl;
	std::cin>>Rows;
	std::cout<<"Please Enter the number of columns"<<std::endl;
	std::cin>>Columns;
	float** Matrix;
	Matrix = new float*[Rows];
	for(int i=0 ;i < Rows ;i++){
		Matrix[i] = new float[Columns];
	}
	srand(time(0));
	for (int i =0 ; i<Rows ; i++){
		for(int j =0 ; j < Columns ; j++){
			Matrix[i][j] = static_cast<float>(rand()%100);		
		}
	}
	float* flat = new float[Rows*Columns];
	for (int i =0 ; i<Rows ; i++){
		for(int j =0 ; j < Columns ; j++){
			flat[index] = Matrix[i][j];
			index++;		
		}
	}
	std::cout<<"Choose the way you want to sort the flat vector :"<<std::endl;
	std::cin>>Choice;
	if(Choice == 0) std::sort(flat,flat+Rows*Columns);
	else std::sort(flat,flat+Rows*Columns,std::greater<float>());
	std::cout<<"The Matrix Unorganised :"<<std::endl;		
	for (int i =0 ; i<Rows ; i++){
		for(int j =0 ; j < Columns ; j++){
			std::cout<<Matrix[i][j]<<std::endl;		
		}
	}
	std::cout<<"The Sorted flat :"<<std::endl;
	for(int i = 0 ; i < Rows*Columns ; i++){
			std::cout<<flat[i]<<std::endl;		
		}	
	std::cout<<"The Min :"<<flat[0]<<std::endl;
	std::cout<<"The Max:"<<flat[Rows*Columns-1]<<std::endl;
	std::cout<<"The Average:"<<(flat[0]+flat[Rows*Columns-1])/(Rows*Columns)<<std::endl;
	delete[] flat;
	for (int i = 0 ; i < Rows;i++){
		delete[] Matrix[i];
	}
	delete[] Matrix;
	std::cout<<"You want to repeat ?"<<std::endl;
	std::cin>>answer;
	}while(answer=="YES");
	return 0;
}		
