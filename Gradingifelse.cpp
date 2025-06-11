#include<iostream>
int main(){
	float Grade;
	std::cout<<"ENter Your Grade"<<std::endl;
	std::cin>>Grade;
	if(20>Grade>16)std::cout<<"Great You got A-\n";
	else if (Grade==20)std::cout<<"Great You got\tA+"<<std::endl;
	else if (12<Grade < 16)std::cout<<"You Got B ,Not Bad You can do better"<<std::endl;
	else if(Grade<12)std::cout<<"You GOt C , You Can do better";
	return 0; 
}


