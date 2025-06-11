#include <iostream>
int main () {
	float a,b;
	std::string op;
	std::cout<<"Enter The first number"<<std::endl;
	std::cin>>a;
	std::cout<<"Enter The second number"<<std::endl;
	std::cin>>b;
	std::cout<<"Enter the op"<<std::endl;
	std::cin>>op;
	if(op == "+")std::cout<<a+b;
	else if (op == "-")std::cout<<a-b<<std::endl;
	else if (op == "x")std::cout<<a*b<<std::endl;
	else if(op == "/")std::cout<<a/b<<std::endl;
	return 0;
}
