// #include <iostream>
// using namespace std;
// class student {
// private:
//     string name;
// public:
//     int roll;
//     void setName(const string x) const
//     {
//         x = "2333";//error due to (const string x) //Parameter-level const
//         name = x; //error setName(const string x) const
//     }
//     string getName() const
//     {
//         return name;
//     }
//     char gender;
//     float cgpa;
//     void display() const
//     {
//         cout << roll << " " << name << endl;
//     }
// };
// int main()
// {
//     student s1, s2;
//     s1.roll = 10;
//     s2.roll = 34;
//     s1.setName("Ali");
//     cout << s1.getName() << endl;
//     s1.cgpa = 4;
//     s2.setName(s1.getName());
//     s2.display();
//     s1.display();

// }