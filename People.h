#include <string>
using namespace std;

class People {
private:
	string surname, name, patronymic;
	bool gender;
	int date;
	unsigned growth;
	float weight;
public:

	People() {
		surname = "surname";
		name = "name";
		patronymic = "patronymic";
		gender = 0;
		date = 1900;
		growth = 0;
		weight = 0;
	};

	~People() {

	};

	friend ostream& operator<< (ostream& out, const People& people);
	friend istream& operator>> (istream& in, People& people);
	string getSurname();
	string getName();
	string getPatronymic();
	bool getGender();
	unsigned getGrowth();
	float getWeight();
	void setSurname(string Surname);
	void setName(string Name);
	void setPatronymic(string Patronymic);
	void setGender(int g);
	void setDate(int Date);
	void setGrowth(unsigned Growth);
	void setWeight(float Weight);
};