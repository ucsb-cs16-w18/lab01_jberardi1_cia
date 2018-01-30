//pi.cpp
// Chloe Avery and Joseph Berardi
// 8366411 and 3711892

#include <iostream>

using namespace std;

int main(){
  int n=0;
  while(n>-1){
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
    cin>>n;
    int m;
    m=n+1;
    float pi=0.000;

    if(n>-1){  
      for(int i=0; i<=n; i++){
	if(i%2==0){
	  pi=pi+1/(2*static_cast<float>(i)+1);
	}
      else{
	pi=pi+(-1)/(2*static_cast<float>(i)+1);
      }
    }
    
    float p;
       p=4*pi;
       cout.setf(ios::fixed);
       cout.setf(ios::showpoint);     
       cout.precision(3);
       if(m==1){
	 cout<<"The approximate value of pi using "<< m <<" term is: "<<p;
	 cout<< endl;
       }
       else
	 {
	   cout<<"The approximate value of pi using "<< m <<" terms is: "<<p;
	   cout<< endl;
	 }
    }
  }
}
