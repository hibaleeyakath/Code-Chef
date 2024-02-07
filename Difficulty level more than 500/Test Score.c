#include <stdio.h>

void TestScore(int x,int y){
    if(y%x==0||y==0)
        printf("YES\n");
    else
        printf("NO\n");
}
int main(void) {
    
	// your code goes here
	int t,n,x,y;
	scanf("%d",&t);
	
	while(t--){
	    scanf("%d %d %d",&n,&x,&y);
	    TestScore(x,y);
	}
    return 0;
}
