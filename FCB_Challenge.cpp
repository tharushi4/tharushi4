# include<stdio.h>
main(){
	int bio;
	int maths;
	int Biology = 40;
	int Physics=20;
	int Chemistry=45;
	int comMaths=33;
	
	bio =  Biology+Physics+Chemistry;
	maths = comMaths+Physics+Chemistry;
	
	if (bio>40){
		 	printf ("%d",bio);
	}else{
		printf("not enough marks");
	}
	if (maths>40){
		 	printf ("%d",bio);
	}else{
		printf("not enough marks");
	}
}