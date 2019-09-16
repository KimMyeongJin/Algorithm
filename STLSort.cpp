#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public:
		string name;
		int score;
		Student(string name, int score) {
			this->name = name;
			this->score = score;
		}
		// ���� ������ '������ ���� ����' 
		bool operator < (Student &student) {
			return this->score < student.score;
		}
};

int main(void) {
	Student students[]={
		Student("��ö��", 95),
		Student("��μ�", 88),
		Student("�踸��", 84),
		Student("�豺��", 86),
		Student("���ܼ�", 93)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i ++) {
		cout << students[i].name << ' ';
	}
}
