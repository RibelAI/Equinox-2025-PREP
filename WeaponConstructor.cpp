#include<iostream>
#include<string>


struct Weapon {
	std::string Name;
	int Damage;
	
	Weapon(const std::string& n, const int& d) : Name(n), Damage(d) {}



};

int main(){
	Weapon Sword("Escalibur",100);
	std::cout<<Sword.Name<<std::endl<<Sword.Damage<<std::endl;



}
