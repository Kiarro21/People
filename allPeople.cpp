#include <iostream>
#include "People.h"


std::ostream& operator<< (std::ostream& out, const People& people) {
	out << "Name: " << people.surname << " " << people.name << " " << people.patronymic << std::endl;
	out << "Gender: "<< (people.gender ? "M" : "W") << std::endl;
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

void People::setSurname(string Surname) {
	if (Surname == " ")
		surname = Surname;
	else
		cout << "Enter again surmane";
}

void People::setName(string Name){
	if (Name == " ")
		name = Name;
	else
		cout << "Enter again Name";
}

void People::setPatronymic(string Patronymic){
	if (Patronymic == " ")
		patronymic = Patronymic;
	else
		cout << "Enter again Patronymic";
}

void People::setGender(int g){
	gender = g;
}

void People::setDate(int Date)
{
	if (Date <= 2022)
		date = Date;
	else
		cout << "Enter again Date";
}

void People::setGrowth(unsigned Growth){
	if (Growth > 220)
		growth = Growth;
	else
		cout << "Enter again Growth";
}

void People::setWeight(float Weight){
	if (Weight > 220)
		weight = Weight;
	else
		cout << "Enter again Weight";
}
