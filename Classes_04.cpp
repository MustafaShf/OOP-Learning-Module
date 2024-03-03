#include <iostream>
using namespace std;
class Point
{
public:
    int x;
    int *y;
    Point(int a, int b)
    {
        x = a;
        y = new int;
        *y = b;
    }
    void display()
    {
        cout << x << " " << *y << endl;
        delete y;
    }
};
int main()
{
    Point p1(56,67);
    Point p2 = p1;
    p2.display();
    p1.display();//problem need a deep copy crash
}