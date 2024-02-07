#include <stdio.h>

void gprog(int);

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	
	while(t--){
	    scanf("%d",&n);
	    gprog(n);
	    
	}
}
void gprog( int n){
    if(n%4==0){
        printf("Good\n");
    }
    else{
        printf("Not Good\n");
    }
}