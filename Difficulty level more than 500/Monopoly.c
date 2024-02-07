#include <stdio.h>

void monopoly(int p,int q,int r,int s){
    if(p> (q+r+s)||q>(p+r+s)||r>(p+q+s)||s>(p+q+r)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
int main(void) {
    int t,p,q,r,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&p,&q,&r,&s );
        monopoly(p,q,r,s);
         
    }
    return 0;

}