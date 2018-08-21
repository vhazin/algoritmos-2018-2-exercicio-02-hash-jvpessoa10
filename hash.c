#include <stdio.h>


/*
t
2

a,b,x,n,c,d,m
2 3 1 3 0 1 7
1 0 0 8 0 8 9
*/
int t;
int a,b,x,n,c,d;
long unsigned int m;
int counter = 0;


int main(){
    scanf("%d",&t);
    int result[t];
    for(int i = 0;i<t;i++){
        scanf("%d %d %d %d %d %d %lu", &a, &b, &x, &n, &c, &d, &m);
        for(long unsigned int j = 0;j<=n;j++){
             
            if((a*(x+j)+b)%m>=c && (a*(x+j)+b)%m<=d){
                counter++;
            }
            
        }
        printf("%d\n",counter);
        counter = 0;
        
    }
    
    return 0;
}