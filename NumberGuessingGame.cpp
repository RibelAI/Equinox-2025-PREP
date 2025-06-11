#include<iostream>
int main(){
	float Number;
	int Found = 0;
	const float S = 21.5;
	while(Found == 0){
		std::cout<<"Enter a Guessing for the Number\n";
		std::cin>>Number;
		if (Number == S) {
			std::cout<<"You found it GREAT\n";
			Found = 1;
		}
		else if (Number > S) std::cout<<"COlDER\n";
		else if(Number < S) std::cout<<"HOTTER\n";
	}
	return 0;
}
