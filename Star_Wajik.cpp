#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int i,j,temp=0,hs,bil, uinam , c=2 , d=3 , e=4 , f=5 , g=5 , h=5 , k=5;
 cin>>bil;
 for (i=bil;i>=1;i--){
  for (j=i;j>=1;j--){
	  if((i == 5)&&(j>=1))
	  {
	  	if((i==5)&&(j==1))
	    {
	  	  cout<<5;
	    } else {
	    	cout << 1;
		}
	  } 
	  if ((i==4) && (j>=1))
	  {
	  	cout << c;
	  	c++;
	  }
	  if ((i==3) && (j>=1))
	  {
	  	cout << d;
	    d++;
	  } 
	  if ((i==2) && (j>=1))
	  {
	  	cout << e;
	    e++;
	  } 
	  if ((i==1) && (j>=1))
	  {
	  	cout << f;
	  } 
	  
	  
	 
	  
  }
  for (uinam=0;uinam<2;uinam++){
   for (hs=1;hs<=bil-i;hs++){
   cout<<" ";
   }
  }
  for (j=i;j>=1;j--){
  	  if((i==5)&&(j==1))
  	  {
  	     cout<<"";	
	  }
	  if ((i==5) && (j>=1))
	  {
		  	cout << 1;
	  }
	  if ((i==4) && (j>=1))
	  {
		  	cout <<k ;
			k--;
	  }
	  if ((i==3) && (j>=1))
	  {
	  		cout <<h;
	  		h--;
	  }
	  if ((i==2) && (j>=1))
	  {
	  		cout<<g;
	  		g--;
	  }
	  if ((i==1) && (j>=1))
	  {
	  		cout<<f;
	  		f--;
	  }
	  
	 

  }
  
 
  cout<<endl;
 }
getch();
}
