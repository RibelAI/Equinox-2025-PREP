#include <iostream>
int main(){
	std::string Name;
	int age;
	float Height;
	float Weight;
	std::cout << "Hello User"<< std::endl;
	std::cout<<"Write Your Name"<<std::endl;
	std::cin >> Name;
	std::cout<<"Write your age"<<std::endl;
	std::cin >> age;
	std::cout<<"Write Your Height"<<std::endl;
	std::cin >> Height;
	std::cout<<"Write Your Weight"<<std::endl;
	std::cin >> Weight;
	std::cout << Name << " "<<age<<" "<< Height<<" "<< Weight<<std::endl;
	return 0;
	
}
