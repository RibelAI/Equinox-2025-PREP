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
	std::string SortChoice;
	std::vector<Student>Vec;
	std::string SaveChoice;
	std::string SearchName;
	float AboveGrade;
	class StudentDatabase{
		private :
			std::vector<Student> StudentDatabase;
		public :
			void addstudentovec(Student& S){
				StudentDatabase.push_back(S);
			}
			
			void LoadFromFile(std::string& filename , Student& S){
				std::ifstream file(filename);
				if(file.is_open()){
					while(getline(file,S.Name)){
						file>>S.age>>S.grade;
						file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						addstudentovec(S);
					}
					
				}
				else std::cout<<"Your File Couldn t open"<<std::endl;
				file.close();

				
			}
			void SaveToFile(std::string& filename){
				std::ofstream file2(filename);
				if(file2.is_open()){
					for(auto& element:StudentDatabase){
						file2<<element.Name<<std::endl<<element.age<<std::endl<<element.grade<<std::endl;
					}
					}else{
						std::cout<<"Error Your File couldn t open"<<std::endl;
					}
					file2.close();

			
			
			}
			
			void SortbyChoice(){
				std::cout<<"For Sorting Now You Must choose how are you going to sort by Name or Age or Grade"<<std::endl;
				std::string ChoiceMethod;
				std::cin>>ChoiceMethod;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				if(ChoiceMethod=="Name") std::sort(StudentDatabase.begin(),StudentDatabase.end(),[](Student& a ,Student& b){return a.Name<b.Name;});
				else if(ChoiceMethod == "Age") std::sort(StudentDatabase.begin(),StudentDatabase.end(),[](Student& a,Student& b){return a.age<b.age;});
				else if(ChoiceMethod == "Grade") std::sort(StudentDatabase.begin(),StudentDatabase.end(),[](Student& a,Student& b){return a.grade<b.grade;});

			}
			
			void Filter(){
				std::string ChoiceFilter;
				std::cout<<"In Order To Filter The Students You Need a criteria to base your choice on :\n1 : Similar Names\n2 : Age=>18\n3 : Grade=>16"<<std::endl;
				std::cin>>ChoiceFilter;			
				if(ChoiceFilter == "SimilarNames") {
					for(int i = 0;i<StudentDatabase.size()-1;i++){
						if(StudentDatabase[i].Name==StudentDatabase[i+1].Name) std::cout<<StudentDatabase[i].Name<<std::endl<<StudentDatabase[i].age<<std::endl<<StudentDatabase[i].grade<<std::endl<<"--"<<std::endl;
					}
					
				}else if(ChoiceFilter == "Age"){
					for(auto& element :StudentDatabase){
						if(element.age>=18){
							std::cout<<element.Name<<std::endl<<element.age<<std::endl<<element.grade<<std::endl<<"--"<<std::endl;
						}
					}
				}else if(ChoiceFilter == "Grade"){
					for(auto& element :StudentDatabase){
						if(element.grade>=16){
							std::cout<<element.Name<<std::endl<<element.age<<std::endl<<element.grade<<std::endl<<"--"<<std::endl;
						}
					}
				}

			}
		
	};
	do{
	std::cout<<"Choose :\n1/Add a new Student\n2/Display all students from the file\n3/Search for a student by name\n4/Display All students above a certain grade\nChoice : "<<std::endl;
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
		std::cout<<"Do you want to save the sorted file in a seperate txt file ?"<<std::endl;
		std::cin>>SaveChoice;
		if(SaveChoice == "Yes"){
			std::ofstream Sortedfile("SortedData.txt");
			if(Sortedfile.is_open()){
				for(auto&element : Vec){
					Sortedfile<<element.Name<<std::endl;
					Sortedfile<<element.age<<std::endl;
					Sortedfile<<element.grade<<std::endl;
				}
				
			}
			else std::cout<<"The Sorted Save file couldn t open"<<std::endl;
		Sortedfile.close();
		}

	}else if (choice==3){
		Vec.clear();
		std:: ifstream filereadtovec("data.txt");
		while(getline(filereadtovec,S.Name)){
			filereadtovec>>S.age>>S.grade;
			filereadtovec.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Vec.push_back(S);
		}
		std::cout<<"Please Enter The Name You are Searching For :"<<std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(std::cin,SearchName);
		for(auto& element : Vec){
			if(element.Name==SearchName){
				std::cout<<element.Name<<std::endl<<element.age<<std::endl<<element.grade<<std::endl;
				break;
			}
		}
	}else if(choice==4){
		Vec.clear();
		std:: ifstream filereadtoVec1("data.txt");
		while(getline(filereadtoVec1,S.Name)){
			filereadtoVec1>>S.age>>S.grade;
			filereadtoVec1.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			Vec.push_back(S);
		}
		std::cout<<"Please Enter The Grade :"<<std::endl;
		std::cin>>AboveGrade;
		for(auto& element : Vec){
			if(element.grade > AboveGrade){
				std::cout<<element.Name<<std::endl<<element.age<<std::endl<<element.grade<<std::endl;
			}
		}
	}
	file.close();
	}while(choice!=0);
}
