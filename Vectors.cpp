#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){
	int Size;
	float Nentered;
	float random;
	std::vector<float> Vec ;
	std::cout<<"Please Enter The Size of The vector : "<<std::endl;
	std::cin>>Size;
	for(int i=0 ; i< Size ;i++){
		std::cout<<"Please enter a number"<<std::endl;
		std::cin>>Nentered;
		srand(time(0));
		random = (static_cast<float>(rand())/100.0f);
		if(random>Nentered) Vec.push_back(Nentered);
		else Vec.push_back(random);
	}
	for(int i=0 ; i< Size ;i++){
		std::cout<<Vec[i];
	}
	
	return 0;
}

