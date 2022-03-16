# include <iostream>
# include <iomanip>

class Distance {
	private:
		float feet, inches;
	
	public:
		Distance( float feet, float inches ): feet(feet), inches(inches){}
		
		float getFeet(){
			return feet;
		}
		
		float getInches(){
			return inches;
		}
		
		void addDistance( Distance d ){
			feet += d.getFeet();
			inches += d.getInches();
		}
		
		void print(){
			std::cout << std::setprecision(4) << "Distance ( feet = " << feet << ", inches = " << inches << " )" << "\n";
		}
};

int main(){
	Distance d1(5.5, 1.2);
	d1.print();
	
	Distance d2(4.5, 8.8);
	d2.print();
	
	std::cout << "Adding d2 to d1 \n";
	d1.addDistance( d2 );
	
	d1.print();
	return 0;
}