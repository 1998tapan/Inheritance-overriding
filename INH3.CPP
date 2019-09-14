/*              
                        Tapan Dabrai
                        Method Overriding
                        14 Sept 19
                                                            */

#include<iostream.h>
#include<conio.h>

class Shape{
    public:
    Shape(){
        cout<<"\nShape constructor called";
    }
    virtual void area(){
	cout<<"\nThis class is a generic class...";
    }
};

class Square:public Shape{
    int a;
    public:
    Square(){
        cout<<"\nSquare constructor called";
        a=10;
    }
    void area(){
        cout<<"\nThe area of square is "<<a*a<<" !!";
    }
};

class Triangle: public Shape{
    int a,b;
    public:
    Triangle(){
        cout<<"\ntriangle constructor called";
        a=10;
        b=20;
    }
    void area(){
	cout<<"\nThe area of triangle is "<<0.5*a*b<<" !!";
    }
};

class Rectangle: public Shape{
    int a,b;
    public:
    Rectangle(){
        cout<<"\nrectangle constructor called";
        a=10;
        b=20;
    }
    void area(){
        cout<<"\nThe area of rectangle is "<<a*b<<" !!";
    }
};

class Circle: public Shape{
    int a;
    public:
    Circle(){
        cout<<"\nCircle constructor called";
        a=10;
    }
    void area(){
        cout<<"\nThe area of circle is "<<3.14*a*a<<" !!";
    }
};

int main(){
    clrscr();
    Shape *ptr;
    Shape s;
    Square sq;
    Rectangle rec;
    Triangle tri;
    Circle cir;
    ptr=&s;
    ptr->area();
    ptr=&sq;
    ptr->area();
    ptr=&rec;
    ptr->area();
    ptr=&tri;
    ptr->area();
    ptr=&cir;
    ptr->area();
    getch();
    return 0;
}

