# include <iostream>
# include <cmath>

enum TT {
	AM, PM
};

class Time {
	private:
		int hours, minutes, seconds;
		TT am;
		
	public:
		Time( int h, int m, int s, TT tt): hours(h), minutes(m), seconds(s), am(tt){}
		
		int getHours(){
			return hours;
		}
		
		int getMinutes(){
			return minutes;
		}
		
		int getSeconds(){
			return seconds;
		}
		
		TT getTT(){
			return am;
		}
};

void to24( Time t ){
	if ( t.getTT() == AM ){
		char pref = t.getHours() < 10 ? '0' : ' ';
		std::cout << pref << t.getHours() << ":" << t.getMinutes() << ":" << t.getSeconds() <<"\n";	
	} else {
		int hrs = t.getHours() + 12;
		std::cout << hrs << ":" << t.getMinutes() << ":" << t.getSeconds() <<"\n";
	}
}

int main(){
	Time t = Time( 1, 30, 56, PM );
	to24(t);
	
	return 0;
}
