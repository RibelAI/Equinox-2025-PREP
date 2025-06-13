#include<iostream>
int main(){
	float startingG;
	float* InOutA;
	float TotalIncome = 0;
	float TotalOutcome = 0;
	int NDays;
	std::cout<<"Please enter The number of Days you are going to calculate the outcome and Incmoe of YOur gold for them : "<<std::endl;
	std::cin>>NDays;
	InOutA = new float[2*NDays];
	std::cout<<"Please enter Your starting Gold"<<std::endl;
	std::cin>>startingG;
	std::cout<<"Please enter Your Income for those"<<NDays<<"Days Day by Day :\n";
	for(int i = 0; i<NDays ; i++){
		std::cout<<"Day"<<i+1<<":"<<std::endl;
		std::cin>>InOutA[i];
	}
	std::cout<<"Please enter Your Outcome for those"<<NDays<<"Days Day by Day :\n";
	for(int i = 0; i<NDays ; i++){
		std::cout<<"Day"<<i+1<<":"<<std::endl;
		std::cin>>InOutA[NDays+i];
	}
	for(int i = 0; i<NDays ; i++){
		TotalIncome = TotalIncome + InOutA[i] ;
		TotalOutcome = TotalOutcome + InOutA[NDays+i] ;
		}
	if (TotalIncome < TotalOutcome) std::cout<<"BEWARE Your Outcome is more than your actual Income"<<std::endl;
	std::cout<<"Final Gold : "<<TotalIncome - TotalOutcome<<std::endl;
	std::cout<<"Average Consumption : "<<TotalOutcome/NDays<<std::endl;
	std::cout<<"Total Income : "<<TotalIncome<<std::endl<<"TotalOutcome : "<<TotalOutcome<<std::endl;
	delete[] InOutA;
	return 0;
	


}

