#include <iostream>
#include "People.h"


std::ostream& operator<< (std::ostream& out, const People& people) {
	out << "Name: " << people.surname << " " << people.name << " " << people.patronymic << std::endl;
	out << "Gender: "<< people.gender << std::endl;
	out << "Growth: " << people.growth << std::endl;
	out << "Weight: " << people.weight << std::endl;

	return out;
}

std::istream& operator>> (std::istream& in, People& people) {
	std::cout << "Enter surname, name and patronymic --> ";
	in >> people.surname;
	in >> people.name;
	in >> people.patronymic;
	std::cout << std::endl << "Enter gender: 1 - male, 2 - female --> ";
	in >> people.gender;
	std::cout << std::endl << "Enter date --> ";
	in >> people.date;
	std::cout << std::endl << "Enter growth --> ";
	in >> people.growth;
	std::cout << std::endl << "Enter weight --> ";
	in >> people.weight;
	return in;
}

std::string People::getSurname() {
	return surname;
}

string People::getName()
{
	return name;
}

string People::getPatronymic()
{
	return patronymic;
}

bool People::getGender()
{
	if (gender)
		return true;
	else
		return false;
}

unsigned People::getGrowth()
{
	return growth;
}

float People::getWeight()
{
	return weight;
}

void People::setSurname(string Surname){
	surname = Surname;
}

void People::setName(string Name){
	name = Name;
}

void People::setPatronymic(string Patronymic){
	patronymic = Patronymic;
}

void People::setGender(int g){
	gender = g;
}

void People::setGrowth(unsigned Growth){
	growth = Growth;
}

void People::setWeight(float Growth){
	growth = Growth;
}
