class Student;
class Teacher {
public:
	void assignGrades(Student&s);
	void adjustHours(Student&s);
protected:
	int NoOfStudent;
	Student*pList[100];
};
class Student {
public:
	friend class Teacher;//ÓÑÔªÀà
protected :
	int semesterHours;
	float gpa;
};