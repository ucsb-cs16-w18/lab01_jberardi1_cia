//block.cpp                                                                   
//Joseph Berardi and Chloe Avery                                              
//3711892 and 8366411                                                         

#include <iostream>

using namespace std;

int main(){

  int row = 1;
  int col = 1;

  while (row>0){
      while (col>0){
	cout<<"Enter number of rows and columns:\n";
	cin>>row;
	cin>>col;
	
	int x=0;
	x=row;
	int y=0;
	y= col;
	
	while(x>0){
	  while(y>0){
	    cout << "X.";
	    y--;
	  }
	  cout << endl;
	  y= col;
	  x--;
	}
      }
  }
}
