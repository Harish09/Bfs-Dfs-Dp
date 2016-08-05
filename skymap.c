#include <iostream>
using namespace std;
 
int S,C;
 
int mat[5][5]={1,0,1,0,1,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0};
 
void maze(int i,int j)
{
 
	if(i<0 || i>=5 || j<0 || j>=5)
	  return;
 
 
	  if(mat[i][j]==1)
 
	   { S++;
	   mat[i][j]=0;
	    maze(i+1,j);
	    maze(i-1,j);
	    maze(i,j-1);
	    maze(i,j+1);
	    }
	    else
	    return;
}
 
 
 
int main() {
	// your code goes here
 
	int i,s,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(mat[i][j]==1)
			{
				s=0;
				C++;
				maze(i,j);
				if(S>s) s=S;
			}
		}
	}
	cout<<C<<s;
	return 0;
}
