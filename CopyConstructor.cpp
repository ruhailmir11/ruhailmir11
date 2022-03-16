#include <iostream>

class Point2D {
	private:
		float x, y;
		
	public:
		Point2D( float a, float b ): x(a), y(b){};
		
		// Copy Constructor ...
		Point2D( const Point2D &p ): x( p.x ), y(p.y){};
		
		void print(){
			std::cout << "Point2D( " << x << ", " << y << " )\n";
		}
};

int main(){
	Point2D p1(2.4, 5.6);
	
	// Copy constructor call ...
	Point2D p2 = p1;
	
	p1.print();
	p2.print();
	
	return 0;
}