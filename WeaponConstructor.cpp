#include<iostream>
#include<string>




struct Weapon {
	std::string Name;
	int Damage;
	
	Weapon(const std::string& n, const int& d) : Name(n), Damage(d) {}



};

struct Player {
	std::string Name;
	int level;
	Weapon weapon;
	
	Player(std::string n,int lvl ,const Weapon& W) : Name(n) ,level(lvl),weapon(W){}

};


int main(){
	Weapon Sword("Escalibur",100);
	std::cout<<Sword.Name<<std::endl<<Sword.Damage<<std::endl;
	Player Adventurer("Tarnished",100,Sword);



}
