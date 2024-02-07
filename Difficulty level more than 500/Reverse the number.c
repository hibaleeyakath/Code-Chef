#include <stdio.h>

int revnum(int num){
    int rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
    
}

int main(void) {
    int t,a,rev;
	// your code goes here
	scanf("%d",&t);
	
	while(t--){
	    int a;
	    scanf("%d",&a);
	    int rev=revnum(a);
	    printf("%d\n",rev);
	}
	return 0;
}


