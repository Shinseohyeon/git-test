//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <list>
//#include <iomanip>
//
//using namespace std;
//
//class Student
//{
//private:
//	string name;
//	int middle;
//	int quiz;
//	int finalex;
//	double sum;
//	int stu_num;
//public:
//	Student()
//	{
//		;
//	}
//	Student(string _name, int _middle, int _quiz, int _finalex)
//	{
//		this->name = _name;
//		this->middle = _middle;
//		this->quiz = _quiz;
//		this->finalex = _finalex;
//	}
//	string Getname() const { return name;}
//	int Getmiddle() const { return middle;  }
//	int Getfinal() const { return finalex; }
//	int Getquiz() const { return quiz; }
//	double Getsum() { sum = middle + finalex + quiz; return sum; }
//};
//
//int main()
//{
//	int num;
//	string name;
//	int middle, finalex, quiz;
//	vector<Student> student;
//	ofstream os;
//	auto MenuPrint = []() {
//		cout.unsetf(ios::left);
//		cout << setw(20) << setfill('-') << "메뉴" << setw(19) << setfill('-')<<"-" << endl;
//		cout << left << "1. 성적 입력" << endl;
//		cout << left << "2. 전체 성적" << endl;
//		cout << left << "3. 전체 성적 저장" << endl;
//		cout << left << "4. 프로그램 종료" << endl;
//		cout << setw(39) << setfill('-') << "-" << endl;
//		cout << endl;
//	};
//	 while (true)
//	 {
//		 MenuPrint();
//		 cout << left << "원하는 작업의 번호를 입력하세요 : ";
//		 cin >> num;
//		 if (num == 1)
//		 {
//			 cout << "이름 (공백없이) 중간, 퀴즈, 기말 점수를 입력하세요 : ";
//			 cin >> name >> middle >> quiz >> finalex;
//			 student.push_back(Student(name, middle, quiz, finalex));
//			 cout << left << "학생 성적이 올바르게 입력되었습니다." << endl;
//		 }
//		 else if (num == 2)
//		 {
//			 cout.unsetf(ios::left);
//			 cout.fill(' ');
//			 cout << endl;
//			 cout << setw(19) << "=" << "계절학기 성적" << "=" << endl;
//			 cout.setf(ios::left);
//			 cout << setw(10)<<"학번" << setw(10) << "이름" << setw(10) << "중간" << setw(10) << "퀴즈" << setw(10) << "기말" << setw(10) << "총점" << endl;
//			 int k = 0;
//			 double sum = 0.0;
//			 double average;
//			 for (auto i = student.begin(); i != student.end(); ++i)
//			 {
//				 cout << setw(10)<< k << setw(10) << i->Getname() << setw(10) << i->Getmiddle() << setw(10) << i->Getquiz() << setw(10) << i->Getfinal() << setw(10) << i->Getsum() << endl;
//
//				 sum = sum + (i->Getsum());
//				 k = k + 1;
//			 }
//			 average = sum / k;
//			 cout << "\n" <<"전체 평균: " << average << endl;
//		 }
//		 else if (num == 3)
//		 {
//			 os.open("list.txt", ios::app | ios::out);
//			 if (!os.is_open())
//			 {
//				 cout << "파일이 제대로 열리지 않았습니다!" << endl;
//				 exit(0);
//			 }
//			 else
//			 {
//				 int k = 0;
//				 double sum = 0.0;
//				 double average;
//				 os << setw(19) << "=" << "계절학기 성적" << "=" << endl;
//				 for (auto i = student.begin(); i != student.end(); ++i)
//				 {
//					 os << setw(10) << k << setw(10) << i->Getname() << setw(10) << i->Getmiddle() << setw(10) << i->Getquiz() << setw(10) << i->Getfinal() << setw(10) << i->Getsum() << endl;
//					 sum = sum + (i->Getsum());
//					 k = k + 1;
//				 }
//				 average = sum / k;
//				 cout << fixed;
//				 cout.precision(2);
//				 os << "\n" << "전체 평균: " << average << endl;
//				 cout << "텍스트 파일이 저장되었습니다." << endl;
//				 os.close();
//			 }
//		 }
//		 else if (num == 4)
//		 {
//			 exit(0);
//		 }
//		 else
//		 {
//			 cout << "번호를 잘못 입력하셨습니다. 다시 입력하세요" << endl;
//		 }
//	 }
//}