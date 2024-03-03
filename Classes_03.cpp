#include <iostream>
using namespace std;
class Point
{
public:
    int x;
    int y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    Point p1;
    p1.x = 78;
    p1.y = 56;
    Point p2 = p1;
    p2.display();
}