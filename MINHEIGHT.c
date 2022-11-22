#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,h ;// test cases
	scanf ("%d\n",&t);
	
	for(int i=1 ; i<=t;i++){
	    scanf("%d",&x);
	    scanf("%d",&h);
	    if (x<h){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	        
	}
	return 0;
}

