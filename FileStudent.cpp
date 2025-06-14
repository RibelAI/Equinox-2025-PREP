#include<iostream>
#include<fstream>
#include<limits>
#include<vector>
#include<algorithm>

int main(){
	int choice;
	struct Student {
		std::string Name;
		int age ;
		float grade;
	};
	Student S;
	std::string line;
	std::vector<Student> Vec;
	std::string SortChoice;
	do{
	std::cout<<"Choose :\n1/Add a new Student\n2/Display all students from the file\nChoice : "<<std::endl;
	std::cin>>choice;
	std::fstream file("data.txt",std::ios::in|std::ios::out|std::ios::app);
	if (choice==1){
		if(file.is_open()){
			std::cout<<"Name : "<<std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin,S.Name);
			file<<S.Name<<std::endl;
			std::cout<<"Age : "<<std::endl;
			std::cin>>S.age;
			file<<S.age<<std::endl;
			std::cout<<"Grade : "<<std::endl;
			std::cin>>S.grade;
			file<<S.grade<<std::endl;
		}
		else std::cout<<"Erreur !! Your File is not opening";
		
	}else if(choice == 2){
		Vec.clear();
		std::cout<<"-----------------";
		while(getline(file,S.Name)){
			file>>S.age;
			file>>S.grade;
			file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Vec.push_back(S);
		}
		std::cout<<std::endl<<"Please Choose How you want to sort the Vec : "<<std::endl;
		std::cin>>SortChoice;
		if(SortChoice=="age")std::sort(Vec.begin(),Vec.end(),[] (Student& a , Student& b) {return a.age <b.age;});
		else if (SortChoice=="Name")std::sort(Vec.begin(),Vec.end(),[] (Student& a , Student& b){return a.Name< b.Name;});
		else if (SortChoice=="grade")std::sort(Vec.begin(),Vec.end(),[](Student& a, Student& b){return a.grade< b.grade;});
		for(auto&element:Vec){
			std::cout<<std::endl<<element.Name<<std::endl<< element.age<<std::endl<< element.grade<<std::endl;
		}
		std::cout<<"-----------------\n";
	}
	file.close();
	}while(choice!=0);
}
