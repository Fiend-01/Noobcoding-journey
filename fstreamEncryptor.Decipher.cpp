#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <cstring>

using namespace std;
int main(){
	
	string myEnc;
	cout<<"Enter what you like to be encrypted: ";
	getline(cin,myEnc);
	
	const	char* myEnc2=myEnc.c_str();//string to basic char

        fstream myFile;

	myFile.open("goalOfFiend.txt",ios::out);
 
 	if (myFile.is_open()){
 	
	 	int crypted[strlen(myEnc2)];
	 	
	 	 myFile<<"{ ";
	 	
	   for(int i=0;i<strlen(myEnc2);i++){
	   	
	    crypted[i] = int (myEnc2[i]);
	   	 myFile<<crypted[i]<<"," ;}
	       myFile<<"}";
	       
	 myFile.close();
     }
     
     	 myFile.open("goalOfFiend.txt",ios::in);//For Read mode use ios::in
      
	   if(myFile.is_open()){
 	     string line;
 	     while(getline(myFile,line)){
 	 	   
 	 	   	const	char* myEnc2=line.c_str();
 	 	   
			  for(int i=0;i<strlen(myEnc2);i++){
			 
			  int decry[strlen(myEnc2)];
			  
			  decry[i] =line[i];
			
			  cout<<(char)decry[i];
			  
				 }
	         }
		 myFile.close();
         }
		

	_getch();
	return 0;
}