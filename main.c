#include<stdio.h>
int main()
{
    printf("\nhello");
    int n;
	do
	{
		printf("\nMenu:\n0: Exit \n1: Insertion \n2: Selection \n3: Bubble");
		printf("\nEnter value of n:");
    	scanf("%d",&n);
    	
		switch(n){
	    	case 1:
	    		printf("\nInsertion sort\n");
	    		break;
	    	case 2:
	    		printf("\nSelection sort\n");
	    		break;
	    	case 3:
	    		printf("\nBubble sort\n");
	    		break;
	    	case 0:
	    	default:
	    		printf("\nNo sorting for you\n");
	    		break;
		}
		
	}while(n!=0);
	
    return 0;
}
