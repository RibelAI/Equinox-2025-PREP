#include<iostream>
#include<cstdlib>
#include<ctime>

void Hint(int S,int attempts,float Number){
		if (Number == S) {
			std::cout<<"You found it in "<<attempts<<"GREAT\n"<<std::endl;
		}
		else if (Number > S) std::cout<<"COlDER\n";
		else if(Number < S) std::cout<<"HOTTER\n";
}



int main(){
	float Number;
	int Found = 0;
	int attempts= 0;

	srand(time(0));
	int S = rand();
	while(Found == 0){
		std::cout<<"Enter a Guessing for the Number\n";
		std::cout<<S;
		std::cin>>Number;
		Hint(S,attempts,Number);
		if(Number == S) Found == 1;
		attempts++;
	}
	return 0;
}
