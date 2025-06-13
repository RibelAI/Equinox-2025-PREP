#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
int main() {
	int Rows;
	int Columns;
	int index=0;
	std::cout<<"Please Enter the number of rows and columns :"<<std::endl;
	std::cout<<"Number of Rows : "<<std::endl;
	std::cin>>Rows;
	std::cout<<"\nNumber of columns : "<<std::endl;
	std::cin>>Columns;
	std::vector<std::vector<float>> Matrix(Rows,std::vector<float>(Columns));
	srand(time(NULL));
	for (int i = 0 ; i < Rows ; i++){
		for(int j = 0;j < Columns ; j++){
			Matrix[i][j] =rand()%10; 
		}
	}
	for (int i = 0 ; i < Rows ; i++){
		for(int j = 0;j < Columns ; j++){
		 	std::cout<<Matrix[i][j]<<std::endl; 
		}
	}
	std::vector<float>flat;
	for(auto& Column : Matrix){
		for(float& Ligne :Column){
			flat.push_back(Ligne);
		} 
	}
	std::cout<<"All The Elements Unorganised in the flat :"<<std::endl;
	for(auto& element : flat){
		std::cout<<element<<std::endl; 
	}
	sort(flat.begin(),flat.end());
	std::cout<<"All The Elements Organised in the flat :"<<std::endl;
	for(auto& element : flat){
		std::cout<<element<<std::endl; 
	}

	std::cout<<"The Matrix in order : "<<std::endl; 
	for (int i = 0 ; i < Rows ; i++){
		for(int j = 0;j < Columns ; j++){
			Matrix[i][j] = flat[index]; 
			std::cout<<"The Flat :"<<std::endl; 	
			std::cout<<flat[i]<<std::endl; 
			std::cout<<"The Matrix :"<<std::endl; 	
			std::cout<<Matrix[i][j]<<std::endl; 
			index++;
		}
	}

	return 0;
	
	
	

}
