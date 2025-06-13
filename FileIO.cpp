#include<iostream>
#include<fstream>
#include<string>

int main(){
	std::string line;
	std::string X;
	std::string Y;
	std::ofstream file1("file.txt");


	if(file1.is_open()){
		std::cout<<"Write Your name"<<std::endl;
		std::getline(std::cin,X);
		file1<<X<<std::endl;
		std::cout<<"Write Your Prename"<<std::endl;
		std::getline(std::cin,Y);
		file1<<Y<<std::endl;
		file1.close();
	}
	else std::cout<<"The file didn t open"<<std::endl;
	std::ifstream file("file.txt");
	if(file.is_open()){
		while(std::getline(file,line)){
			std::cout<<"Line 1 :"<< line<<"\n";
		}
		file.close();
	} 
	else std::cout<<"The file didn t open"<<std::endl;
	return 0;
}
