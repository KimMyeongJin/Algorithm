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
		// 薑溺 晦遽擎 '薄熱陛 濛擎 牖憮' 
		bool operator < (Student &student) {
			return this->score < student.score;
		}
};

int main(void) {
	Student students[]={
		Student("梯繹熱", 95),
		Student("梯團熱", 88),
		Student("梯虜熱", 84),
		Student("梯捱熱", 86),
		Student("梯濤熱", 93)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i ++) {
		cout << students[i].name << ' ';
	}
}
