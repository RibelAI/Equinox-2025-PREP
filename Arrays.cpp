#include<iostream>
int main(){
	float startingG;
	float InOutA[2][7	];
	float TotalIncome = 0;
	float TotalOutcome = 0;
	std::cout<<"Please enter Your starting Gold"<<std::endl;
	std::cin>>startingG;
	std::cout<<"Please enter Your Income for those 7 Days Day by Day :\n";
	for(int i = 0; i<7 ; i++){
		std::cout<<"Day"<<i+1<<":"<<std::endl;
		std::cin>>InOutA[0][i];
	}
	std::cout<<"Please enter Your Outcome for those 7 Days Day by Day :\n";
	for(int i = 0; i<7 ; i++){
		std::cout<<"Day"<<i+1<<":"<<std::endl;
		std::cin>>InOutA[1][i];
	}
	for(int i = 0; i<7 ; i++){
		TotalIncome = TotalIncome + InOutA[0][i] ;
		TotalOutcome = TotalOutcome + InOutA[1][i] ;
		}
	if (TotalIncome < TotalOutcome) std::cout<<"BEWARE Your Outcome is more than your actual Income"<<std::endl;
	std::cout<<"Final Gold :"<<TotalIncome - TotalOutcome;
	std::cout<<"Average Consumption"<<TotalOutcome/7;
	std::cout<<"Total Income :"<<TotalIncome<<"TotalOutcome :"<<TotalOutcome;
	return 0;
	


}

