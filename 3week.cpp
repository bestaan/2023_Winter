#include <iostream>

using namespace std;

class student {
private:
	char * name;
	int age;
	char * vision;
public:
	void ShowInfo();
	void SetInfo(char * _name, int _age, char * _vision);
	void Study();
	void Sleep();
};

void student::ShowInfo()
{
	cout << "이름: " << name << ", 나이: " << age << ", 장래희망: " << vision << endl;
}

void student::SetInfo(char * _name, int _age, char * _vision)
{
	name = _name;
	age = _age;
	vision = _vision;
}

void student::Study()
{
	cout << "공부!" << endl;
}

void student::Sleep()
{
	cout << "잠!" << endl;
}

int main()
{
	student stu;

	stu.SetInfo("조은재", 21, "소프트웨어개발자");
	stu.ShowInfo();

	while(true) {
		stu.Study();
		stu.Sleep();
	}

	return 0;
}
