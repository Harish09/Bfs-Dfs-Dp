#include <iostream>
using namespace std;
int mat[4][4]={1,1,1,0,1,1,0,0,1,1,1,1,0,1,1,1};
int sx[20];
int sy[20];
int top=0;
int rn[8]={-1,-1,-1,0,0,1,1,1};
int cn[8]={-1,0,1,-1,1,-1,0,1};
void maze(int x,int y)
{
	cout<<"1";
	mat[x][y]=2;
	sx[top]=x;
	sy[top]=y;
	top++;
	
	if(x==3 && y==3)
	  {
	  	for(int i=0;i<top;i++)
	  	cout<<sx[i]<<" "<<sy[i]<<endl;
	  	return;
	  }
	 
	 for(int i=0;i<8;i++)
	 {
	 	cout<<"2";
	 	int tempx=x+rn[i];
	 	int tempy=y+cn[i];
	 	
	 	if(tempx>=0 && tempx<4 && tempy>=0 && tempy<4 && mat[tempx][tempy]==1)
	 	{
	 		maze(tempx,tempy);
	 	}
	 }
	 top--;
}
	  
	  

int main() {
	// your code goes here
	maze(0,0);
	return 0;
}
