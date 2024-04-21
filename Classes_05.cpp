// //deep copy
// #include <iostream>
// using namespace std;
// class Point
// {
// public:
//     int x;
//     int *y;
//     Point(int a, int b)
//     {
//         cout << "parameterized" << endl;
//         x = a;
//         y = new int;
//         *y = b;
//     }
//     Point(Point &obj)
//     {
//         cout << "deep copy" << endl;
//         x = obj.x;
//         this->y = new int;
//         *y = *(obj.y);
//     }
//     void display()
//     {
//         cout << x << " " << *y << endl;
//         delete y;
//     }
// };
// int main()
// {
//     Point p1(56,67);
//     Point p2(p1);
//     p2.display();
//     p1.display();
// }