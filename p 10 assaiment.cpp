/*

10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

*/

#include<stdio.h>
int main(){
	
	int a,w,l,h;
	
	    printf("enter the value of w");
	    scanf("%d",&w);
	
		printf("enter the value of l");
	    scanf("%d",&l);
	
		printf("enter the value of h");
	    scanf("%d",&h);
	    
	    // area of a rectanguler prism
	    
	    a = 2*(w*l + h*l + h*w);
	    
	    printf("area of rectangular prism is %d",a);
	    
	    
}