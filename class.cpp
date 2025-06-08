#include <iostream>
#include <conio.h>
using namespace std;

class entity{
public:
     string race,name;
	 int age;
	 string job;
	 string gender;	
	
      void statusOpen(){
      	
      	cout<<"Name: "<<name<<" \n"
		<<"Race: "<<race<<" \n"
      	<<"Age: "<<age<<" \n"
      	<<"Job class : "<<job<<" \n"
      	<<"Gender : "<<gender<<" \n";
	  }	

};
	
int main(){
	
	entity entity1;
	entity1.age=20;
	entity1.gender="Male";
	entity1.job="Fated villian";
	entity1.race="Human ";
	entity1.name="BigBadFiend '0'";
	entity1.statusOpen();
	
	_getch();
	return 0;
}